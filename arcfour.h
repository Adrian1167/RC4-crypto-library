/* arcfour.h */
#ifndef ARCFOUR_H
#define ARCFOUR_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#define rc4decrypt(x,y) rc4encrypt(x,y)

struct s_arcfour{

}

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

Arcfour *rc4init(uint8* key, uint16 length);
uint8 rc4byte();
uint8 *rc4encrypt(uint8*, uint16);




#endif /* ARCFOUR_H */