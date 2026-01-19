#include <stdio.h>

int main(){
    int marks1, marks2, marks3;

    printf("Enter your marks1:\n");
    scanf("%d", &marks1);
    printf("Enter your marks2:\n");
    scanf("%d", &marks2);
    printf("Enter your marks3:\n");
    scanf("%d", &marks3);

    if(marks1<33||marks1<33||marks1<33){
        printf("You are failed due to less marks in individual subject\n");
    }
    else if((marks1 + marks2 + marks3)/3 < 40){
        printf("You are failed due to less percentage\n");
    }
    else{
        printf("You are passed!");
    }
    return 0;
}
