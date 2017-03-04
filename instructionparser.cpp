#include "instructionparser.h"

namespace virtualbin
{
    InstructionParser::InstructionParser()
    {

    }

    int InstructionParser::parse(uint8_t *source)
    {
        for(int i=0;i<pfNum;++i)
        {
            if(*source==pfList[i])
            {

            }
        }

    }

}
