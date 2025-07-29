#include <assert.h>
#include <stdio.h>
#include <string.h>

char removeDuplicates(char *str) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != str[i - 1]) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    return *str;
}

int main() {
    char str[] = "bssdffFdcrrttii     ***#";
    removeDuplicates(str);
    printf("%s\n", str);
}