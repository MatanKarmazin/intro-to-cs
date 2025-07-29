#include <stdio.h>
void main() {
    double price, sum;
    int quantity;
    printf("Hello Alice!\n");
    printf("What is the price per item?\n");
    scanf("%lf", &price);
    printf("how many items did you bought?\n");
    scanf("%d", &quantity);
    if (quantity >= 50) {
        sum = price * .5 * (double)quantity;
        printf("your total price is: %lf\n", sum);
    }
    else if (quantity > 25){
        sum = price * .8 * (double)quantity;
        printf("your total price is: %lf\n", sum);
    }
    else if (quantity > 10){
        sum = price * .95 * (double)quantity;
        printf("your total price is: %lf\n", sum);
    }
    else {
        sum = price * (double)quantity;
        printf("your total price is: %lf\n", sum);
    }
}