#include <iostream>
#include "AllocSingleton.h"

allocator AllocSingleton::theAlloc;

void* operator new(size_t bytes){
   return AllocSingleton::getAlloc().create(bytes);
}

void* operator new[](size_t bytes){
    return AllocSingleton::getAlloc().createArr(bytes);
}

void operator delete(void* toDel){
    AllocSingleton::getAlloc().del(toDel);
}

void operator delete[](void* toDel){
    AllocSingleton::getAlloc().delArr(toDel);
}

int main(int argc, char** argv) {
    if(argc == 1){
        AllocSingleton::getAlloc().setMode("default");
    }
    std::cout << "Hello, World!" << std::endl;

    char* testWord = new char;
    *testWord = 'h';
    std::cout << *testWord << std::endl;
    return 0;
}
