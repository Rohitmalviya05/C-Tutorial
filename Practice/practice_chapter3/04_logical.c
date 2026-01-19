#include <stdio.h>

int main(){

    int a=0; int b=1;

    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if (a && b){
        printf("Both are true\n");
    }
    else{
        printf("Both are not same");
    }

    //  it is  same as 
    // if(a){
    //     if(b){
    //         printf("Both are true\n");

    //     }
    // }
    return 0;

}