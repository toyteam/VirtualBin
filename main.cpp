#include <iostream>
#include"virtualcore.h"
#include"virtualmemory.h"
using namespace std;
using namespace virtualbin;

int main(int argc, char *argv[])
{
    VirtualCore onecore;
    VirtualMemory mem(0xFFFFF);
    onecore.mountMemory(mem);
    onecore.run();
    return 0;
}
