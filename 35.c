#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
int main(){
    int r, t, m, k, sum;
    scanf("%d", &r);
    for (int i = 0; i < r; i++) {
        sum = 0;
        scanf("%d %d %d", &t, &m, &k);
        int a[k];
        for (int j = 0; j < k; j++)
            scanf("%d", &a[j]);
        qsort(a, k, sizeof(int), cmp);
        for (int j = 0; j < m; j++)
            sum = sum + a[j];
        if (sum <= t)
            printf("%d\n", sum);
        else
            printf("Impossible\n");
    }
}