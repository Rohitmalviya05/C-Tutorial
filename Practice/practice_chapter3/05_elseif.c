#include <stdio.h>

int main(){
    int age  = 50;
    if(age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>40){
        printf("you can drive and you are elder");
    }
    else if(age>18){
        printf("you can drive");
    }
    else{     // last else if every conditions is fail
        printf("You can not drive");
    }
    return 0;

}