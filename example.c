/* example.c */

#include "arcfour.h"

#define F fflush(stdout);


int main();

void printbin(uint8 *input, const uint16 size){
    uint16 i;
    uint8 *p;

    assert(size>0);

    for(i=size, p=input; i; size--, p++){
        if(!(i+1)%2){
            pritnf(" ");
        }
        pritnf("%02x", *p);
    }



}

int main(){

    Arcfour *rc4;
    uint16 key_length, plaintext_length;
    char *key, *plaintext, *encyrpted, *decrypted;

    key = "cryptography";
    from = "I like crypto very much";
    key_length = strlen(key);
    plaintext_length = strlen(plaintext);
    
    printf("Initializing encryption..."); F;
    rc4 = rc4init(key, key_length);
    printf("done\n");

    printf("'%s'\n ->")
    encrypted = rc4encrypt(plaintext, key_length);




}