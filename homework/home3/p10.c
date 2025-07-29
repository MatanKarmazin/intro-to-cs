#include <stdio.h>
void main() {
    int birthDay, birthMonth, birthYear;
    printf("Please enter your birthday(DD.MM.YYYY)\n");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);
    if ((birthDay >= 21 && birthMonth == 3) ||
        (birthDay <= 19 && birthMonth == 4)) {
        printf("Your zoadic sign is Aries\n");
    }
    if ((birthDay >= 20 && birthMonth == 4) ||
        (birthDay <= 20 && birthMonth == 5)) {
        printf("Your zoadic sign is Taurus\n");
    }
    if (birthDay >= 21 && birthMonth == 5 ||
        birthDay <= 21 && birthMonth == 6) {
        printf("Your zoadic sign is Gemini\n");
    }
    if (birthDay >= 22 && birthMonth == 6 ||
        birthDay <= 22 && birthMonth == 7) {
        printf("Your zoadic sign is Cancer\n");
    }
    if (birthDay >= 23 && birthMonth == 7 ||
        birthDay <= 22 && birthMonth == 8) {
        printf("Your zoadic sign is Leo\n");
    }
    if (birthDay >= 23 && birthMonth == 8 ||
        birthDay <= 22 && birthMonth == 9) {
        printf("Your zoadic sign is Virgo\n");
    }
    if (birthDay >= 23 && birthMonth == 9 ||
        birthDay <= 23 && birthMonth == 10) {
        printf("Your zoadic sign is Libra\n");
    }
    if (birthDay >= 24 && birthMonth == 10 ||
        birthDay <= 21 && birthMonth == 11) {
        printf("Your zoadic sign is Scorpius\n");
    }
    if (birthDay >= 22 && birthMonth == 11 ||
        birthDay <= 21 && birthMonth == 12) {
        printf("Your zoadic sign is Sagittarius\n");
    }
    if (birthDay >= 22 && birthMonth == 12 ||
        birthDay <= 19 && birthMonth == 1) {
        printf("Your zoadic sign is Capricornus\n");
    }
    if (birthDay >= 20 && birthMonth == 1 ||
        birthDay <= 18 && birthMonth == 2) {
        printf("Your zoadic sign is Aquarius\n");
    }
    if (birthDay >= 19 && birthMonth == 2 ||
        birthDay <= 20 && birthMonth == 3) {
        printf("Your zoadic sign is Pisces\n");
    }
}