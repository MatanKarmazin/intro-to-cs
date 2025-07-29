#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int len = strlen(str);
    int count = 1;
    int i, j;

    for (i = 0, j = 1; j <= len; j++) {
        if (str[i] == str[j]) {
            count++;
        } else {
            if (count > 1) {
                printf("%d", count);
            }
            // printf("%c", str[i]);
            count = 1;
            i = j;
        }
    }
}

int main() {
    char str[] = "beesssseddderrrrr";
    compressString(str);
    printf("%s\n" ,str);
    return 0;
}
