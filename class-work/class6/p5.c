#include <stdio.h>

int fA(int num){
    if (num == 1){
        return 1;
    }
    int temp = fA(num - 1);
    printf("%d\n", temp);   
    return num + fA(num - 1);
}

void main(){ 
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    int resultA = fA(num);
    printf("%d\n", resultA);
}