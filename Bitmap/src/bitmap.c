#include "bitmap.h"


Bitmap bitmapCreate(int size)
{
    Bitmap bm;

    if (size <= 0)
    {
        errno = EINVAL;
        return NULL;  //Invalid size
    }

    bm = malloc(sizeof(struct _bitmap));  //size is number of bits
    if (!bm)
        return NULL;  //Out of memory

    bm->size = size;
    bm->sizeInBytes = (size - 1) / 8 + 1;
    bm->bits = malloc(bm->sizeInBytes);
    if (!bm->bits)
        return NULL;  //Out of memory

    bitmapClear(&bm);

    return bm;
}

void bitmapPrint(Bitmap bm)
{
    int len = bm->size + bm->size / 4 + 1;
    char buffer[len];  //A string buffer with enough space for the bitmap and some extra blank spaces for legibility
    int bufferIndex;

    if (!bm)
        return;

    bufferIndex = 0;
    for (int i = bm->size - 1; i >= 0; i--)
    {
        int bit;

        if ((bm->size - i + 1) % 4 == 0)
            buffer[bufferIndex++] = ' ';  //Add spaces for legibility

        bit = bitmapGet(bm, i);
        buffer[bufferIndex++] = bit ? '1' : '0';
    }
    buffer[len - 1] = '\0';

    printf("%s\n", buffer);
}

void bitmapDestroy(Bitmap* bm)
{
    free((*bm)->bits);
    free((*bm));
}

int bitmapGet(Bitmap bm, int pos)
{
    if (!bm || !bm->bits || pos < 0 || pos >= bm->size)
    {
        errno = EINVAL;
        return -1;
    }

    return ((bm->bits[pos / 8] >> (pos % 8)) & 1) ? 1 : 0;
}

int bitmapSet(Bitmap* bm, int pos)
{
    if (!(*bm) || !(*bm)->bits || pos < 0 || pos >= (*bm)->size)
    {
        errno = EINVAL;
        return -1;
    }

    (*bm)->bits[pos / 8] |= 1 << (pos % 8);

    return 0;
}

int bitmapUnset(Bitmap* bm, int pos)
{
    if (!(*bm) || !(*bm)->bits || pos < 0 || pos >= (*bm)->size)
    {
        errno = EINVAL;
        return -1;
    }

    (*bm)->bits[pos / 8]  &= ~(1 << (pos % 8));

    return 0;
}

int bitmapClear(Bitmap* bm)
{
    if (!(*bm))
        return 0;
    
    //Set every bit with 0
    for (int i = 0; i < (*bm)->sizeInBytes; i++)
        (*bm)->bits[i] = 0;

    return 1;
}
