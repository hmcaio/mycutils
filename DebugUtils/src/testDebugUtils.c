#include <stdio.h>
#include "debugUtils.h"


int main()
{
    printd(1, "Bit 1 is on.\n");
    printd(2, "Bit 2 is on.\n");
    printd(3, "Bit 1 and 2 are on.\n");
    printd(4, "Bit 3 is on.\n");

    fprintd(1, "Bit 1 is on.\n");
    fprintd(2, "Bit 2 is on.\n");
    fprintd(3, "Bit 1 and 2 are on.\n");
    fprintd(4, "Bit 3 is on.\n");
    
    return 0;
}
