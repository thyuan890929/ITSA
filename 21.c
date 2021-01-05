#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int cmp(const void *a, const void *b) {
    if (*(double *)a - *(double *)b > 0)
        return 1;
    return 0;
} 
int main() {
    double a[11];
    for (int i = 0; i < 10; i++)
        scanf("%lf", &a[i]);
    qsort(a, 10, sizeof(double), cmp);
    printf("maximum:%.2lf\n", a[9]);
    printf("minimum:%.2lf\n", a[0]);
}