#include <stdio.h>

int bigger(int num) {
    if (num == 0) {
        return 0;
    }
    int temp, max = 0;
    scanf("%d", &temp);
    int maxInRest = bigger(num - 1);
    if (temp > maxInRest) {
        max = temp;
    } else {
        max = maxInRest;
    }
    return max;
}

int main() {
    int num;
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &num);
    
    printf("Enter the sequence of numbers: ");
    int result = bigger(num);
    
    printf("The maximum value in the sequence is: %d\n", result);
    
    return 0;
}
