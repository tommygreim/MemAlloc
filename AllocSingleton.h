//
// Created by nanog on 1/28/2020.
//

#ifndef MEMALLOC_ALLOCSINGLETON_H
#define MEMALLOC_ALLOCSINGLETON_H

#include "allocator.h"
#include <string>

class AllocSingleton {
private:
    std::string allocMode;
    static allocator theAlloc;
    AllocSingleton();
public:
    static allocator getAlloc() {
        return theAlloc;
    }
};


#endif //MEMALLOC_ALLOCSINGLETON_H
