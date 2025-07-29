#include <stdio.h>
void fun(int *num1Ptr, int *num2Ptr, int *num3Ptr) {

    int temp;
    int max = *num1Ptr;
    if (*num2Ptr > max) {
        max = *num2Ptr;
    }
    if (*num3Ptr > max) {
        max = *num3Ptr;
    }

    int min = *num1Ptr;
    if (*num2Ptr < min) {
        min = *num2Ptr;
    }
    if (*num3Ptr < min) {
        min = *num3Ptr;
    }
    
    if (max == min) {
        return;
    } else if (*num1Ptr == max) {
        if(*num2Ptr == min){
            temp = *num2Ptr;
            *num2Ptr = *num3Ptr;
            *num3Ptr = temp;
        }
    } else if (*num2Ptr == max) {
        int temp = *num2Ptr;
        *num2Ptr = *num1Ptr;
        *num1Ptr = temp;
    }
}
int main() {
    int num1 = 6, num2 = 9, num3 = 1;
    printf("before fun: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    fun(&num1, &num2, &num3);
    printf("after fun: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}