#include "memory.h"

bool Memory::malloc(uint32_t memSize)
{
    if (memory != nullptr)
    {
        delete memory;
        memory = nullptr;
    }
    else
    {
        memory = new uint32_t(memSize);
    }

    return (memory != nullptr);
}

void Memory::free()
{
    if (memory == nullptr)
    {
        return;
    }

    delete memory;
    memory = nullptr;
}