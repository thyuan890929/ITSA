#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int c[n][2];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &c[i][0], &c[i][1]);
    int *b = calloc(25, sizeof(int));
    for (int i = 0; i < n; i++)
        for (int j = c[i][0]; j < c[i][1]; j++)
            b[j]++;
    int a = 0;
    for (int j = 0; j < 25; j++)
        if (b[j] > a)
            a = b[j];
    printf("%d\n", a);
}
