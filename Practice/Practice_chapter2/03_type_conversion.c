#include<stdio.h>

int main(){
    // int a = 9; // if i will write this in float as 9.0 then it will give me 4.5
    float a =  9.0;
    int b = 2;
    float c = a/b;
    int d = 6.7;
    printf("The value of a/b is %f\n", c);
    printf("The valude of d is %d", d); // in this it will give me only the value of d is 6 
    //look for associativity

    printf("The value is %d\n",a*b/c + 7);
    printf("The value is %d", 3*b/2*c + 7*a);
    return 0;
}