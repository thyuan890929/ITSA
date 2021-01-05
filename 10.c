#include<stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    while(a != 0 && b != 0) {
        if (a > b)
           a = a % b;
        else if (a < b)
            b = b % a;
    }
    if (a == 0)
        printf("%d\n", b);
    else
        printf("%d\n", a);
}
