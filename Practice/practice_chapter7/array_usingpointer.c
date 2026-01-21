#include <stdio.h>
int main(){
    int marks[] = {23,45,60,76};

    int* ptr = &marks[0];
    // int* ptr = marks;

    for (int i=0; i<4; i++){
        printf("The marks at index %d is %d\n",i, *ptr);
        ptr++;
    }

    return 0;
}