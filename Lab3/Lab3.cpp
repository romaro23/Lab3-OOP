
#include <iostream>
#include "..\Symbol.h"
#include "WordWrapper.h"
int main()

{
    WordWrapper word("Hello");
    WordWrapper word1("ppppp");
    word(2, 3) = word1;
    word.print();

}
