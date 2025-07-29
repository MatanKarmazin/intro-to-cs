#include <stdio.h>
int print(int, int);
void main() {
    int num, i, twentyCount, tenCount, ten, fiveCount, five, twoCount, two,
        oneCount, one;
    printf("enter an amount: ");
    scanf("%d", &num);
    twentyCount = num / 20;
    ten = num % 20;
    tenCount = ten / 10;
    five = ten % 10;
    fiveCount = five / 5;
    two = five / 5;
    twoCount = two % 2;

   // printf("%d, 20\n%d, 10\n%d, 5\n%d, 2\n%d, 1\n", twentyCount, tenCount,
      //     fiveCount, twoCount, oneCount);

    
    
    int countFive = 0;
    int countTwo = 0;
    
    print(num, 20);

    // ------
    int countTwenty = 0;
    while (num >= 20) {
        num -= 20;
        countTwenty += 1;
    }
    printf("%d, 20NIS\n", countTwenty);
    
    
    
    // ------
    
    int countTen = 0;
    while (num >= 10) {
        num -= 10;
        countTen += 1;
    }
    printf("%d, 10NIS\n", countTen);
}
int print(int num, int size){
    int count = 0;
    while (num >= size) {
        num -= size;
        count += 1;
    }
    printf("%d, %dNIS\n", count, size);
}