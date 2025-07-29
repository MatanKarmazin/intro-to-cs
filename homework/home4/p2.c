#include <stdio.h>
void main() {
    int x, i, j;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (i = 0;i <= x; i+= 25){
        if(x >= i && x < (i+25)){
            printf("%d is between [%d, %d)\n", x, i, i+25);
        }
    }

    j = 0;
    while (x < j+25){
        j += 25;
    }
    printf("%d is between [%d, %d)\n", x, j, j+25);

}