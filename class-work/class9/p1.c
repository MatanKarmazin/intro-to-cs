#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *fun(char *str){
    int size = strlen(str);
    char *newStr = (char*)malloc(size*2 + 1);
    assert(newStr);
    strcpy(newStr, str);
    strcat(newStr, str);
    return newStr;
}

int main() {
    char str[] = "abcd";
    char *newStr = fun(str);
    printf("%s\n", newStr);
    return 0;
}