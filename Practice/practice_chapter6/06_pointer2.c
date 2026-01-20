#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i;
    int** k = &j;

    printf("The value of in is %d\n",i);
    printf("The value of in is %d\n",*j);
    printf("The value of in is %d\n",*(&i));
    printf("The value of in is %d\n",**(&j));

    return 0;

}