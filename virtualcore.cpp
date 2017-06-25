#include "virtualcore.h"

namespace virtualbin
{
    uint8_t pfList[pfNum]={0x26,0x2E,
                0x36,0x3E,
                0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,
                0x64,0x65,0x66,0x67,
                0xF3,0x9B,
                0xF0,0xF2,0xF3};

    VirtualCore::VirtualCore()
        :veax(0),vebx(0),vecx(0),vedx(0),
          vesi(0),vedi(0),
          vesp(0),vebp(0),
          ves(0),vcs(0xFF000000),vss(0),vds(0),vfs(0),vgs(0),
          veip(0),veFlags(0),mem(nullptr)
    {

    }

    VirtualCore::VirtualCore(uint8_t *memory)
        :veax(0),vebx(0),vecx(0),vedx(0),
          vesi(0),vedi(0),
          vesp(0),vebp(0),
          ves(0),vcs(0xFF000000),vss(0),vds(0),vfs(0),vgs(0),
          veip(0),veFlags(0),mem(nullptr)
    {

    }

    void VirtualCore::run()
    {
        while(true)
        {
            this->parse(veip);

        }
    }

    void VirtualCore::stop()
    {

    }
    int VirtualCore::parse(byteptr source)
    {

        std::pair<bool,uint8_t> prefix=this->getPrefix(source);
        if(prefix.first==true)
        {
            ++source;
            switch(mem->get(source))
            {

            }
        }
        else
        {
            byte po=mem->get(source);
            if(po==0x0F)
            {
                //Two-byte Instructions
            }
            else if(po==0x00)
            {
                //ADD
                RegType *op1=getAddress32(source);
                byte op2=getReg(source);

            }

        }

        return 0;
    }

    std::pair<bool, uint8_t> VirtualCore::getPrefix(byteptr source)
    {
        for(int i=0;i<pfNum;++i)
        {
            if(mem->get(source)==pfList[i])
            {
                return std::make_pair(true,pfList[i]);
            }
        }
        return std::make_pair(false,0x00);
    }

    byte VirtualCore::getReg(byteptr source)
    {
        return ((mem->get(source))&0x38)>>3;
    }

    byte VirtualCore::getMod(byteptr source)
    {
        return ((mem->get(source))&0xC0)>>6;
    }

    byte VirtualCore::getRM(byteptr source)
    {
        return (mem->get(source))&0x3;
    }

    RegType * VirtualCore::getAddress32(int groupPos, byteptr source)
    {
        if(getMod(source)==0x0)
        {
            if(getRM(source)==0x0)
            {

            }
            else if(getRM(source)==0x1)
            {

            }
            else if(getRM(source)==0x2)
            {

            }
            else if(getRM(source)==0x3)
            {

            }
            else if(getRM(source)==0x4)
            {

            }
            else if(getRM(source)==0x5)
            {

            }
            else if(getRM(source)==0x6)
            {

            }
            else if(getRM(source)==0x7)
            {

            }
        }
        else if(getMod(source)==0x1)
        {
            if(getRM(source)==0x0)
            {

            }
            else if(getRM(source)==0x1)
            {

            }
            else if(getRM(source)==0x2)
            {

            }
            else if(getRM(source)==0x3)
            {

            }
            else if(getRM(source)==0x4)
            {

            }
            else if(getRM(source)==0x5)
            {

            }
            else if(getRM(source)==0x6)
            {

            }
            else if(getRM(source)==0x7)
            {

            }
        }
        else if(getMod(source)==0x2)
        {
            if(getRM(source)==0x0)
            {

            }
            else if(getRM(source)==0x1)
            {

            }
            else if(getRM(source)==0x2)
            {

            }
            else if(getRM(source)==0x3)
            {

            }
            else if(getRM(source)==0x4)
            {

            }
            else if(getRM(source)==0x5)
            {

            }
            else if(getRM(source)==0x6)
            {

            }
            else if(getRM(source)==0x7)
            {

            }
        }
        else if(getMod(source)==0x3)
        {
            if(getRM(source)==0x0)
            {
                if(groupPos==0x0)
                {
                    return &veax;
                }
                else if(groupPos==0x1)
                {

                }
                else if(groupPos==0x2)
                {

                }
                else if(groupPos==0x3)
                {

                }
                else if(groupPos==0x4)
                {

                }
                else if(groupPos==0x5)
                {

                }
                else if(groupPos==0x6)
                {

                }
            }
            else if(getRM(source)==0x1)
            {
                return &vecx;
            }
            else if(getRM(source)==0x2)
            {
                return &vedx;
            }
            else if(getRM(source)==0x3)
            {
                return &vebx;
            }
            else if(getRM(source)==0x4)
            {
                return &vesp;
            }
            else if(getRM(source)==0x5)
            {
                return &vebp;
            }
            else if(getRM(source)==0x6)
            {
                return &vesi;
            }
            else if(getRM(source)==0x7)
            {
                return &vedi;
            }
        }
    }
}


