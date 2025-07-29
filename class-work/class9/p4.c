#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

char *fun(char *str) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    return str;
}

int main() {
    char str[] = "I li ve in Isra el";
    char *newStr = fun(str);
    printf("%s\n", newStr);
}