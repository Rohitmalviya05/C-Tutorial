// Pointers kya hai
// pointer ek variable hai jo ki address store krta hai anothor variable ka 


#include <stdio.h>


int main(){
    int i = 78;
    int* j = &i; // j is a pointer poinnting to i
    printf("The Adress of i is %p\n",&i);
    printf("The Adress of i is %p\n",j);
    return 0;
}