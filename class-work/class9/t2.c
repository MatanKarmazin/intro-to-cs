#include <stdio.h>

char fun(char *str, int *ptr) {
    int count[26] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }
    char maxChar = 'a';
    int maxCount = 0;
    for (i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = 'a' + i;
        }
    }
    *ptr = maxCount;
    return maxChar;
}

int main() {
    char str[] = "strings seem silly";
    int ptr;
    char result = fun(str, &ptr);
    printf("%d\n", ptr);
    printf("%c\n", result);
    return 0;
}