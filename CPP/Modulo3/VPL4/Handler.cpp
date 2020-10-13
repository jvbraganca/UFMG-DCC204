#include <iostream>

#include "Handler.h"

int fer_assert(const bool expr, const char* msg) {
    if (!expr) {
        std::cout << msg << std::endl;
        exit(1);
    }
    return 0;
}

void HandlerAdd::handle(Instruction *inst) {
    if (inst->msg == "add")
    {
        int v1, v2, res;
        v1 = (this->_stack->empty()) ? fer_assert(0, "Erro: poucos argumentos na pilha.") : this->_stack->top();
        this->_stack->pop();
        v2 = (this->_stack->empty()) ? fer_assert(0, "Erro: poucos argumentos na pilha.") : this->_stack->top();
        this->_stack->pop();
        res = v1 + v2;
        this->_stack->push(res);
    } else this->_next->handle(inst);
}

void HandlerMul::handle(Instruction *inst) {
    if (inst->msg == "mul")
    {
        int v1, v2, res;
        v1 = this->_stack->top();
        this->_stack->pop();
        v2 = this->_stack->top();
        this->_stack->pop();
        res = v1 * v2;
        this->_stack->push(res);
    } else this->_next->handle(inst);
}

void HandlerPop::handle(Instruction *inst) {
    if (inst->msg == "pop")
    {
        if (this->_stack->empty())
        {
            fer_assert(0, "Erro: poucos argumentos na pilha.");
        } else this->_stack->pop();
    } else this->_next->handle(inst);
}

void HandlerPrint::handle(Instruction *inst) {
    if (inst->msg == "print")
    {
        std::cout << this->_stack->top() << std::endl;
    } else this->_next->handle(inst);
}

void HandlerPush::handle(Instruction *inst) {
    if (inst->msg == "push")
    {
        this->_stack->push(inst->value);
    } else this->_next->handle(inst);
}