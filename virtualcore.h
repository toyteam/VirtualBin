#ifndef CORE_H
#define CORE_H
#include<cstdint>
#include"virtualmemory.h"
#include"instructionparser.h"

#define pfNum 29

namespace virtualbin
{
    extern uint8_t pfList[pfNum];
    using RegType=uint32_t;
    class VirtualCore
    {
    public:
        VirtualCore();
        VirtualCore(uint8_t * memory);

        RegType veax,vebx,vecx,vedx;
        RegType vesi,vedi;
        RegType vesp,vebp;
        RegType ves,vcs,vss,vds,vfs,vgs;
        RegType veip;
        RegType veFlags;

        void mountMemory(VirtualMemory &mem){this->mem=&mem;}
        void reset(RegType * reg){*reg=0;}
        void run();
        void stop();
    protected:
        int parse(byteptr source);
        std::pair<bool,uint8_t> getPrefix(byteptr source);
        byte getReg(byteptr source);
        RegType * getAddress(byteptr source);
    private:
        VirtualMemory * mem;
    };

}

#endif // CORE_H
