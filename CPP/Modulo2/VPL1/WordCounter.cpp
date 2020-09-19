#include "WordCounter.hpp"
#include "Word.hpp"

using namespace std;

WordCounter::WordCounter(int num_words) {

	words = new Word[num_words];
}

void WordCounter::addWord(string w) {
    int isValueExistent = 0;
    int existentValueIndex = 0;
    for (int i = 0; i < this->size; ++i) {
        if (this->words[i].word == w) {
            isValueExistent = 1;
            existentValueIndex = i;
        }
    }
    if (isValueExistent == 0) {
        this->words[this->size].word = w;
        this->words[this->size].incrementFreq();
    }
    if (isValueExistent == 1) {
        this->words[existentValueIndex].incrementFreq();
    }
}

void WordCounter::print() const {
    for (auto word : this->words)
}