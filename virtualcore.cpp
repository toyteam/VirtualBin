#include "virtualcore.h"

namespace virtualbin
{
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
          veip(0),veFlags(0),mem(memory)
    {

    }

    void VirtualCore::run()
    {
        while()
        {

        }
    }

    void VirtualCore::stop()
    {

    }
}


