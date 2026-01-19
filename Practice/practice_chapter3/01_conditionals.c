#include <stdio.h>

int main(){
    int age = 15;

    if(age > 10){
        printf("We are in if statement\n");
        printf("Your age is Greater  than 10\n");
        
    }
    if (age%5 == 0){
        printf("We are in another if\n");
        printf("Your age is Greater  than 10\n");
    }
    return 0;
}