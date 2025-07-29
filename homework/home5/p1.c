#include <stdio.h>

int square(int);
int pwrFor(int, int);
int pwrWhile(int, int);

void main() {
    int num, power;
    printf("enter an integer and power: ");
    scanf("%d %d", &num, &power);
    printf("%d\n", square(num));
    int resultFor = pwrFor(num, power);
    printf("%d\n", resultFor);
    int resultWhile = pwrWhile(num, power);
    printf("%d\n", resultWhile);
}

int square(int number) {
    number *= number;
    return number;
}

int pwrFor(int number, int pwr){
    int i;
    int result = 1;
    for(i = 1; i <= pwr; i++){
        result *= number;
    }
    return result;
}

int pwrWhile(int number, int pwr){
    int result = 1;
    while (pwr > 0){
        result *= number;
        pwr--;
    }
    return result;
}