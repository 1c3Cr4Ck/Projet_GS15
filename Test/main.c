#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab_sbox[16][16] = {
    { 63 , 7 , 77 , 1 , 2 , 15 , 11 , 8 , 3 , 10 , 6 , 12 , 5 , 9 , 0 , 7 } ,
    { 0 , 15 , 7 , 4 , 14 , 2 , 13 , 1 , 10 , 6 , 12 , 11 , 9 , 5 , 3 , 8 } ,
    { 4 , 1 , 14 , 8 , 13 , 6 , 2 , 11 , 15 , 12 , 9 , 7 , 3 , 10 , 5 , 0 } ,
    { 15 , 12 , 8 , 2 , 4 , 9 , 1 , 7 , 5 , 11 , 3 , 14 , 10 , 0 , 6 , 13 },
    };
    printf("%c", tab_sbox[0][0]);
    printf("Vous avez choisi le chiffrement AES!\n\n");
    return 0;
}
