#include <stdio.h>

char myToLower(char ch);
char myToUpper(char ch);

void main() {
    char ch;
    int lowToUpper, upperToLow;
    printf("enter an ABC letter: ");
    scanf("%c", &ch);
    // printf("%d\n", ch);
    lowToUpper = myToUpper(ch);
    upperToLow = myToLower(ch);
    printf("%c\n", lowToUpper);
    printf("%c\n", upperToLow);
}

char myToLower(char ch) {
    if ((ch >= 65) && (ch <= 90)) {
        int lowerCase = ch + 32;
        printf("%c\n", lowerCase);
    } else {
        printf("-1\n");
    }
    return 0;
}

char myToUpper(char ch) {
    if ((ch >= 97) && (ch <= 122)) {
        int upperCase = ch - 32;
        printf("%c\n", upperCase);
    } else {
        printf("-1\n");
    }
    return 0;
}