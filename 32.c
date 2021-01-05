#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    int b;
    char a[101];
    fgets(a, 101, stdin);
    scanf("%d", &b);
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = (a[i] - 'A' + b) % 26 + 'A';
        else if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = (a[i] - 'a' + b) % 26 + 'a';
        else if (a[i] >= '0' && a[i] <= '9')
            a[i] = (a[i] - '0' + b) % 10 + '0';
    }
    printf("%s", a);
}