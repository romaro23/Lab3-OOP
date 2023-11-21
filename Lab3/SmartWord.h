#pragma once
using namespace std;
class Word;
class SmartWord {
private:
    Word* word;
    size_t start;
    size_t length;

public:
    SmartWord(Word* _word, size_t _start, size_t _length)
        : word(_word), start(_start), length(_length) {}
    SmartWord& operator=(const Word& other);

};

