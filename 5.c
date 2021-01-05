#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, *b, c;
    while (scanf("%d", &a) != EOF) {
        c = 0;
        b = calloc(8, sizeof(int));
        if (a < 0) {
            a = a + 129;
            c = 1;
        }
        for (int i = 7; i >= 0; i--) {
            if (c)
                b[7 - i] = a % 2;
            else
                b[i] = a % 2;
            a = a / 2;
            if (a == 0)
                break;
        }
        for (int i = 0; i < 8; i++)
            printf("%d", b[i]);
        printf("\n");
    }
}
