//
// Created by nanog on 1/28/2020.
//

#ifndef MEMALLOC_ALLOCATOR_H
#define MEMALLOC_ALLOCATOR_H
#include <string>


class allocator {
private:
    std::string mode;
public:
    allocator(std::string assignedMode);
    allocator();
    void del(void* toDel);
    void* create(size_t bytes);
};


#endif //MEMALLOC_ALLOCATOR_H
