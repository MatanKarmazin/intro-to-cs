#include <stdio.h>
#include <string.h>

int fun(char *str1, char *str2) {
    int i;
    int counter[26] = {0};
    for (i = 0; str1[i] != '\0'; i++) {
        counter[str1[i] - 'a']++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        counter[str2[i] - 'a']++;
    }
    int temp = 0;
    for (i = 0; i < 26; i++) {
        if (counter[i] > 1) {
            temp++;
        }
    }
    int len = strlen(str1);
    if (temp == len) {
        return 1;
    }
    return 0;
}

int main() {
    char str1[] = "jim";
    char str2[] = "mojair";
    int result = fun(str1, str2);
    printf("%d\n", result);

    return 0;
}