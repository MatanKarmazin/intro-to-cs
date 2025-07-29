#include <stdio.h>
#include <string.h>

char fun(char *str) {
    int i, j;
    // int len = strlen(str);
    int count = 1;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            str[j++] = str[i];
            if (count > 1){
                str[j++] = count + '0';
            }
            count = 1;
        }
    }
    str[j] = '\0';
    return *str;
}

int main() {
    char str[] = "beesssseddderrrrr";
    fun(str);
    printf("%s\n", str);
    return 0;
}