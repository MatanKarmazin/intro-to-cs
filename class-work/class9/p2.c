#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char fun(char *str, int*ptr) {
    char *count = (char *)calloc((26 + 1), sizeof(char));
    assert(count);
    int i;
    for (i = 0; i < 26; i++) {
        count[str[i]]++;
    }
    char max = 'a';
    for (i = 0; i < 26; i++) {
        if (count[i] > max){
            max = count[i];
        }
    }
    return max;
}

int main() {
    char str[] = "strings seems silly";
    int ptr;
    char result = fun(str, &ptr);
    printf("%d\n", ptr);
    printf("%c\n", result);
    return 0;
}