#include<stdio.h>
int main() {
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF) {
        int a[x][y], b[y][x];
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                scanf("%d", &a[i][j]);
        for(int i = 0; i< y; i++)
            for(int j = 0; j < x; j++)
                b[i][j] = a[j][i];
        for(int i = 0;i < y; i++) {
            for(int j = 0; j < x; j++) {
                printf("%d", b[i][j]);
                if (j != x - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }
}
