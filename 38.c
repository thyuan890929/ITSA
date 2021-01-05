#include <stdio.h>
#include <ctype.h>
int main() {
    double a = 0;
    scanf("%lf", &a);
    if (a <= 120) {
        printf("Summer months:%.2lf\n", a * 2.1);
        printf("Non-Summer months:%.2lf\n", a * 2.1);
    }
    else if (a > 120 && a <= 330) {
        printf("Summer months:%.2lf\n", 120 * 2.1 + (a - 120) * 3.02);
        printf("Non-Summer months:%.2lf\n", 120 * 2.1 + (a - 120) * 2.68);
    }
    else if (a > 330 && a <= 500) {
        printf("Summer months:%.2lf\n", 120 * 2.1 + 210 * 3.02 + (a - 330) * 4.39);
        printf("Non-Summer months:%.2lf\n", 120 * 2.1 + 210 * 2.68 + (a - 330) * 3.61);
    }
    else if (a > 500 && a <= 700) {
        printf("Summer months:%.2lf\n", 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + (a - 500) * 4.97);
        printf("Non-Summer months:%.2lf\n", 120 * 2.1 + 210 * 2.68 + 170 * 3.61 + (a - 500) * 4.01);
    }
    else  {
        printf("Summer months:%.2lf\n", 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + (a - 700) * 5.63);
        printf("Non-Summer months:%.2lf\n", 120 * 2.1 + 210 * 2.68 + 170 * 3.61 + 200 * 4.01 + (a - 700) * 4.5);
    }
}