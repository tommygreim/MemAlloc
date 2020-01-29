//
// Created by nanog on 1/28/2020.
//

#include "allocator.h"

allocator::allocator(std::string assignedMode){
    mode = assignedMode;
}
void allocator::del(void* toDel){
    if(mode == "default"){
        free(toDel);
    }
}

void* allocator::create(size_t bytes){
    if(mode == "default"){
        return malloc(bytes);
    }
    else{
        exit(EXIT_FAILURE);
    }
}

allocator::allocator() {
    mode = "default";
}

void allocator::delArr(void *toDel) {
    if(mode == "default"){
        free(toDel);
    }
}

void* allocator::createArr(size_t bytes) {
    if(mode == "default"){
        return malloc(bytes);
    }
    else{
        exit(EXIT_FAILURE);
    }
}

void allocator::setMode(std::string newMode) {
    mode = newMode;
}

