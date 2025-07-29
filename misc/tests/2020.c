#include <stdio.h>

/*q2
int CalGimatria(char* str, int* gematria) {
    if (*str == '\0') {
        return 0;
    }
    return gematria[*str - 'a'] + CalGimatria(str + 1, gematria);
}

int main() {
    int gematria[26] =
{1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800};
    char str[] = "exam";
    int result = CalGimatria(str, gematria);
    printf("%d\n", result);
}
*/
/*
int isEqual(int* arr, int size) {
    if (*arr > size) return 0;
    if (arr[0] == arr[size - 1]) return 1;
    if (arr[0] < arr[size - 1])
        return isEqual(arr + 1, size);
    else
        return isEqual(arr, size - 1);
}

int main() {
    int arr[] = {1,3,4,9,12,10,7,4,2};
    int arr2[] = {1,4,6,9,11,15,12,8,5};
    int size = 9;
    int result = isEqual (arr, size);
    printf("%d\n", result);
    int result2 = isEqual (arr2, size);
    printf("%d\n", result2);
}
*/

int isPretty(int num) {
    int i, count = 0;
    for (i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count += 2;
        }
    }
    if (num % count == 0) {
        return 1;
    }
    return 0;
}

int main() {
    printf("%d\n", isPretty(25));
}