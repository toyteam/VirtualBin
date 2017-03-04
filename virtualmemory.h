#ifndef VIRTUALMEMORY_H
#define VIRTUALMEMORY_H
#include<cstdint>
namespace virtualbin
{
    using byte=uint8_t;
    using byteptr=uint32_t;

    class VirtualMemory
    {
    public:
        VirtualMemory();
        VirtualMemory(uint32_t size);
        VirtualMemory(const VirtualMemory& other)=delete;
        VirtualMemory& operator=(const VirtualMemory& other)=delete;
        ~VirtualMemory();
        byte& get(byteptr offset){return data[offset];}
    private:
        uint8_t * data;
    };

}

#endif // VIRTUALMEMORY_H
