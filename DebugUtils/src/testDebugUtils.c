#include <stdio.h>
#include "debugUtils.h"


int main()
{
    debugPrint(1, "Bit 1 is on.\n");
    debugPrint(2, "Bit 2 is on.\n");
    debugPrint(3, "Bit 1 and 2 are on.\n");
    debugPrint(4, "Bit 3 is on.\n");
    
    return 0;
}
