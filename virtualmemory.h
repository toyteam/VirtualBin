#ifndef VIRTUALMEMORY_H
#define VIRTUALMEMORY_H
#include<cstdint>
namespace virtualbin
{
    class VirtualMemory
    {
    public:
        VirtualMemory();
        VirtualMemory(uint32_t size);
        ~VirtualMemory();
        uint8_t * data;
    };

}

#endif // VIRTUALMEMORY_H
