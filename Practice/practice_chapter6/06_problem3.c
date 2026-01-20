#include <stdio.h>

void chnge_to_thirtytimes(int* a);
void chnge_to_thirtytimes(int* a){
    *a = *a * 10;

}
int main(){
    int a = 45;
    printf("The value of a is %d\n", a);
    chnge_to_thirtytimes(&a);
    printf("The value of x is %d\n", a);
    return 0;
}