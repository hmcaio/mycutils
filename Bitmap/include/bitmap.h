#ifndef __CMATSUMO_BITMAP__
#define __CMATSUMO_BITMAP__


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


typedef struct _bitmap
{
    unsigned char* bits;
    int size;
    int sizeInBytes;
}* Bitmap;


Bitmap bitmapCreate(int size);

void bitmapPrint(Bitmap bm);

void bitmapDestroy(Bitmap* bm);

int bitmapGet(Bitmap bm, int pos);

int bitmapSet(Bitmap* bm, int pos);

int bitmapUnset(Bitmap* bm, int pos);

int bitmapClear(Bitmap* bm);


#endif
