#include<stdio.h>
#include<math.h>
int main() {
    int x, y;
    while (scanf("%d", &x) != EOF && scanf("%d", &y) != EOF) {
        double dis = (x * 1.0) * (x * 1.0) + (y * 1.0) * (y * 1.0);
        if (dis < 10000.0 || dis - 10000.0 < 1e-6)
            printf("inside\n");
        else
            printf("outside\n");
    }
}
