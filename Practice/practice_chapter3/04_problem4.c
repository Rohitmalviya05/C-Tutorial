//ascii value

#include <stdio.h>

int main(){
    char ch;

    printf("Enter The char:%c\n");
    scanf("%c", &ch);
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97  to 122 
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character is uppercase\n");

    }
return 0;

}