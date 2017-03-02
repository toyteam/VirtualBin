#include "virtualmemory.h"

namespace virtualbin
{
    VirtualMemory::VirtualMemory()
        :data(nullptr)
    {

    }
    VirtualMemory::VirtualMemory(uint32_t size)
    {
        data=new uint8_t(size);
    }

    VirtualMemory::~VirtualMemory()
    {
        delete data;
    }
}

