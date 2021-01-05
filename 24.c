#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
    long double sum = 0.0, r;
    long long int n, p;
    scanf("%Lf %lld %lld", &r, &n, &p);
    for (int i = 0; i < n; i++) {
        sum = sum + p;
        sum = sum * (1.0 + r);
    }
    long long int a = sum;
    printf("%lld\n", a);
}