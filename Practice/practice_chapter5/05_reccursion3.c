#include <stdio.h>

int factorial(int);

// factorial(5)=5*4*3*2*1
// factorial(4)=4*3*2*1
// factorial(3)=3*2*1

int factorial(int n){
    if (n==1||n==0){
        return 1;
    }
    // factorial(n) = factorial(n-1)X n
    return factorial(n-1)*n;
}
int main(){
    int a;
    printf("Enter The Number: ");
    scanf("%d",&a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
