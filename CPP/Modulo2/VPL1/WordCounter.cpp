#include "WordCounter.hpp"
#include "Word.hpp"
#include <algorithm>  // std::sort
#include <map>

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
        this->size++;
    }
    if (isValueExistent == 1) {
        this->words[existentValueIndex].incrementFreq();
    }
}

void WordCounter::print() const {
    sort(this->words[0].word, this->words[this->size].word);
    for (int i = 0; i < this->size; ++i) {
        cout << this->words[i].word << " " << this->words[i].count;
    }
}