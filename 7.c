#include <stdio.h>
int main() {
    int n;
    int a,b,c,d;
    char action;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf(" %c %d %d %d %d", &action, &a, &b, &c, &d);
        switch(action) {
            case '+':
                printf("%d %d\n", a + c, b + d);
                break;
            case '-':
                printf("%d %d\n", a - c, b - d);
                break;
            case '*':
                printf("%d %d\n", a * c - b * d, b * c + a * d);
                break;
        }
    }
}
