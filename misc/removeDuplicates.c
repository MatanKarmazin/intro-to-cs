#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *removeDuplicates(char *str) {
    int i, j;
    int len = strlen(str);
    char *newStr = (char *)malloc(len + 1);
    assert(newStr);
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != str[i - 1]) {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';
    return newStr;
}

int main() {
    char str[] = "mmmaaatttaaannnn";
    char *newStr = removeDuplicates(str);
    printf("%s\n", newStr);
    free(newStr);
}