#include <stdio.h>
#include <stdlib.h>

int ex2(char *str) {
    int i;
    int count[26] = {0};
    for (i = 1; str[i] != '\0'; i++) {
        int temp = (str[i] - str[i - 1]);
        count[(abs(temp))]++;
    }
    int max = 0;
    for (i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = i;
        }
    }
    return max;
}

int main() {
    char str[] = "ac";
    int result = ex2(str);
    printf("%d\n", result);
    return 0;
}