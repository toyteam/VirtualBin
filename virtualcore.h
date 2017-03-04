#ifndef CORE_H
#define CORE_H
#include<cstdint>
#include"virtualmemory.h"
#include"instructionparser.h"
namespace virtualbin
{
    class VirtualCore
    {
    public:
        VirtualCore();
        VirtualCore(uint8_t * memory);

        uint32_t veax,vebx,vecx,vedx;
        uint32_t vesi,vedi;
        uint32_t vesp,vebp;
        uint32_t ves,vcs,vss,vds,vfs,vgs;
        uint32_t veip;
        uint32_t veFlags;

        void mountMemory(const VirtualMemory &mem){this->mem=mem;}
        void reset(uint32_t reg){reg=0;}
        void run();
        void stop();
    private:
        uint8_t * mem;
    };

}

#endif // CORE_H
