#include <stdio.h>

int main(){


    // POINTER ARITHMETIC USING INTEGER POINTER
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++; // increment 4 bytes but if we deal with character then it will icrement by 1
    // printf("The address of a is %u\n", ptr);


    // POINTER ARITHMETIC USING INTEGER POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; // increment 4 bytes but if we deal with character then it will icrement by 1
    printf("The address of a is %u\n", ptr);
    return 0; 


}