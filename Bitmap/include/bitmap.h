#ifndef __CMATSUMO_BITMAP__
#define __CMATSUMO_BITMAP__


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


/**
 * Bitmap
 * Represents a bitmap structure. Holds the memory for the bits and the
 * size of the bitmap (in bits and in bytes).
 */
typedef struct _bitmap
{
    unsigned char* bits;    //Bits of the bitmap
    int size;               //Size of the bitmap in bits
    int sizeInBytes;        //Size of the bitmap in bytes
}* Bitmap;


/**
 * bitmapCreate
 * Creates a new bitmap with all bits set to 0.
 * 
 * IN
 *  int size: Size of the bitmap to be created in bits.
 * 
 * OUT
 *  On success, returns a reference to the bitmap created. Returns NULL
 *  if there is not enough memory or the size argument is invalid
 *  (negative).
 */
Bitmap bitmapCreate(int size);

/**
 * bitmapPrint
 * Displays all the bits in the bitmap (separated in groups of 4 bits).
 * 
 * IN
 *  Bitmap bm: The bitmap to be displayed.
 */
void bitmapPrint(Bitmap bm);

/**
 * bitmapDestroy
 * Deallocates memory used by a bitmap.
 * 
 * IN
 *  Bitmap* bm: Reference to the bitmap to be dstroyed.
 */
void bitmapDestroy(Bitmap* bm);

/**
 * bitmapGet
 * Gets the value of the bit in a given position of the bitmap.
 * 
 * IN
 *  Bitmap bm: The bitmap.
 *  int pos: Position of the bit to get.
 * 
 * OUT
 *  Returns the value of the bit (0 or 1) on sucess. Returns -1 if any
 *  of the rguments is invalid.
 */
int bitmapGet(Bitmap bm, int pos);

/**
 * bitmapSet
 * Sets a given bit in the bitmap to 1.
 * 
 * IN
 *  Bitmap* bm: The bitmap.
 *  int pos: Position of the bit to set.
 * 
 * OUT
 *  Returns 1 on success. Returns 0 if any of the arguments in invalid.
 */
int bitmapSet(Bitmap* bm, int pos);

/**
 * bitmapUnset
 * Sets a given bit in the bitmap to 0.
 * 
 * IN
 *  Bitmap* bm: The bitmap.
 *  int pos: Position of the bit to set.
 * 
 * OUT
 *  Returns 1 on success. Returns 0 if any of the arguments in invalid.
 */
int bitmapUnset(Bitmap* bm, int pos);

/**
 * bitmapClear
 * Sets all the bits in the bitmap to 0.
 * 
 * IN
 *  Bitmap* bm: The bitmap.
 * 
 * OUT
 *  Returns on success. Returns 0 if the bitmap is invalid.
 */
int bitmapClear(Bitmap* bm);


#endif
