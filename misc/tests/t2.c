#include <stdio.h>
#include <string.h>

void squeeze(char *str) {
    int count[26] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }
    int j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (count[str[i] - 'a'] >=1) {
            str[j] = str[i];
            j++;
            count[str[i] - 'a'] = 0;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "natalidimansthein";
    squeeze(str);
    printf("%s\n", str);
}