#include<stdio.h>
int main() {
    int num, s;
    while (scanf("%d", &num) != EOF) {
        s = 1;
        if (num == 1) {
            printf("NO\n");
            continue;
        }
        if (num == 2 || num == 3) {
            printf("YES\n");
            continue;
        }
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("NO\n");
                s = 0;
                break;
            }
        }
        if (s)
            printf("YES\n");
    }
}
