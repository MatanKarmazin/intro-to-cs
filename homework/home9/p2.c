#include <stdio.h>
#include <string.h>

int fun(char *str1, char *str2) {
    int count[26] = {0};
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']++;
    }
    int temp = 0;
    for (i = 0; i < 26; i++) {
        // printf("%d ", counter[i]);
        if (count[i] > 1) {
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
    char str2[] = "ijm";
    int result = fun(str1, str2);
    printf("%d\n", result);

    return 0;
}