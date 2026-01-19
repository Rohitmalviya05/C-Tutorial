#include <stdio.h>

int fibonacci(int);
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);

}
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));

    return 0;

}