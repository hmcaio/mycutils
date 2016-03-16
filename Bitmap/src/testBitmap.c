#include <stdio.h>
#include "bitmap.h"


int main()
{
    Bitmap bm;

    bm = bitmapCreate(10);
    if (!bm)
    {
        fprintf(stderr, "Failed to create bitmap.\n");
        return 1;
    }

    bitmapPrint(bm);

    bitmapSet(&bm, 3);
    bitmapSet(&bm, 0);
    bitmapSet(&bm, 8);

    bitmapPrint(bm);

    bitmapUnset(&bm, 3);

    bitmapPrint(bm);

    bitmapClear(&bm);
    
    bitmapPrint(bm);

    bitmapDestroy(&bm);

    printf("End\n");

    return 0;
}
