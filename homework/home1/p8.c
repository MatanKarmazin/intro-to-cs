#include <stdio.h>
void main(){
    double priceA, priceB;
    int quantityA, quantityB;
    printf("What is the price for product A?\n");
    scanf("%lf", &priceA);
    printf("How many items you bought from product A?\n");
    scanf("%d", &quantityA);
    printf("What is the price for product B?\n");
    scanf("%lf", &priceB);
    printf("How many items you bought from product B?\n");
    scanf("%d", &quantityB);
    double x = (priceA * (double)quantityA + priceB * (double)quantityB)/(quantityA+quantityB);
    printf("Alice paid in averege %lf NIS per item\n", x);

}