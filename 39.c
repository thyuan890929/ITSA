#include <stdio.h>
#include <ctype.h>
int main() {
    int c = 0, a[4];
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[j]);
        if (a[0] > 60 && a[1] > 60 && a[2] > 60)
            printf("P\n");
        else if (a[0] + a[1] + a[2] >= 220 && ((a[0] >= 60 && a[1] >= 60 && a[2] < 60) || (a[0] >= 60 && a[1] < 60 && a[2] >= 60) || (a[0] < 60 && a[1] >= 60 && a[2] >= 60)))
            printf("P\n");
        else if (((a[0] >= 60 && a[1] >= 60 && a[2] < 60) || (a[0] >= 60 && a[1] < 60 && a[2] >= 60) || (a[0] < 60 && a[1] >= 60 && a[2] >= 60)) && a[0] + a[1] + a[2] < 220 )
            printf("M\n");
        else if (((a[0] < 60 && a[1] < 60 && a[2] >= 80) || (a[0] >= 80 && a[1] < 60 && a[2] < 60) || (a[0] < 60 && a[1] >= 80 && a[2] < 60)))
            printf("M\n");
        else
            printf("F\n");
    }
}