#pragma once
#include "..\Word.h"
#include "SmartWord.h"
using namespace std;
class WordWrapper: public Word
{
public:
	WordWrapper(string _word) : Word(_word) {};
	SmartWord operator()(size_t start, size_t length) const {
		if (start < symbols.size() && start + length <= symbols.size()) {
			return SmartWord(const_cast<WordWrapper*>(this), start, length);
		}
		else {
			return SmartWord(nullptr, 0, 0);
		}
	}

};

