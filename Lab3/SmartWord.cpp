#include "SmartWord.h"
#include "..\Word.h"
SmartWord& SmartWord::operator=(const Word& other) {
    if (length == other.symbols.size()) {
        for (size_t i = 0; i < length; ++i) {
            word->symbols[start + i]->value = other.symbols[i]->value;
        }
    }
    else if (length < other.symbols.size()) {
        for (size_t i = 0; i < other.symbols.size(); ++i) {
            if (i >= length) {
                word->symbols.insert(word->symbols.begin() + start + i, new Symbol(other.symbols[i]->value));
                continue;
            }
            word->symbols[start + i]->value = other.symbols[i]->value;

        }
    }
    else {

        for (size_t i = 0; i < length; ++i) {
            if (i >= other.symbols.size()) {
                word->symbols.erase(word->symbols.begin() + start + i);
                i--;
                length--;
                continue;
            }
            word->symbols[start + i]->value = other.symbols[i]->value;
        }
    }
    return *this;
}