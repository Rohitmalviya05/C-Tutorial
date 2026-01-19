#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);

    i = i + 5;

    printf("The value of i is %d\n",i);

    i++; // post increment
    // ++i; pre increment

    printf("The value of i is %d\n",i);

    i+=2;

    printf("The value of i is %d\n",i);

    i = i+4;
    
    printf("The value of i is %d\n",i);

    return 0;

}