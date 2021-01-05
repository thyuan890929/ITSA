#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
    int a, b, c, n, sum, fif = 0, ten = 0, one = 0;
    scanf("%d,%d,%d,%d", &n, &a, &b, &c);
    sum = a * 15 + b * 20 + c * 30;
    if (sum > n)
        printf("0\n");
    else {
        sum = n - sum;
        fif = sum / 50;
        sum = sum % 50;
        ten = sum / 5;
        sum = sum % 5;
        one = sum;
        printf("%d,%d,%d\n", one, ten, fif);
    }
}