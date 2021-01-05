#include <stdio.h>
#include <stdlib.h>
int main() {
    double s, h;
    while(1) {
        if (scanf("%lf %lf", &h, &s) == EOF)
            break;
        if (s == 1)
            printf("%.1lf\n", (h - 80) * 0.7);
        else if (s == 2)
            printf("%.1lf\n", (h - 70) * 0.6);
    }
}