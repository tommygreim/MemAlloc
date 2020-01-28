#include <iostream>
#include "AllocSingleton.h"

allocator AllocSingleton::theAlloc;

void* operator new(size_t bytes){
   return AllocSingleton::getAlloc().create(bytes);
}

void operator delete(void* toDel){
    AllocSingleton::getAlloc().del(toDel);
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    char* testWord = new char;
    *testWord = 'h';
    std::cout << *testWord << std::endl;
    return 0;
}
