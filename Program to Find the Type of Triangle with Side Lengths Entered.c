#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    char longestSide;

    printf("Enter the side lengths of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        longestSide = 'a';
    } else if (b > a && b > c) {
        longestSide = 'b';
    } else {
        longestSide = 'c';
    }

    if (longestSide == 'a') {
        if (a * a == b * b + c * c) {
            printf("Dik acili ucgen\n");
        } else if (a * a > b * b + c * c) {
            printf("Genis acili ucgen\n");
        } else if (a * a < b * b + c * c) {
            printf("Dar acili ucgen\n");
        } else {
            printf("Girilen kenarlar bir üçgen oluþturamaz\n");
        }
    } else if (longestSide == 'b') {
        if (b * b == a * a + c * c) {
            printf("Dik acili ucgen\n");
        } else if (b * b > a * a + c * c) {
            printf("Genis acili ucgen\n");
        } else if (b * b < a * a + c * c) {
            printf("Dar acili ucgen\n");
        } else {
            printf("Girilen kenarlar bir ucgen olusturamaz\n");
        }
    } else {
        if (c * c == a * a + b * b) {
            printf("Dik acili ucgen\n");
        } else if (c * c > a * a + b * b) {
            printf("Genis acili ucgen\n");
        } else if (c * c < a * a + b * b) {
            printf("Dar acili ucgen\n");
        } else {
            printf("Girilen kenarlar bir ucgen olusturamaz\n");
        }
    }

    return 0;
}

