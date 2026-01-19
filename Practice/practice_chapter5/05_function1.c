#include <stdio.h>

int sum(int,int); // funnction prototype

int sum(int x,int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){

    int a = 5;
    int b = 6;

    int c  = sum(a,b); // function call 
    printf("%d\n", c);

    sum(a, b);   

    // we can directlyy write values  in sum
    sum(12,68); // function call

    sum(20,50); // function call

    return 0;
}