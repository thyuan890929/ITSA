#include <stdio.h>
#include <ctype.h>
int main() {
    int a[5], big = 0;
    for (int i = 0; i < 4; i++)
        scanf("%d", &a[i]);
    if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3] && a[3] == a[0])
        printf("WIN\n");
    else if ((a[0] == a[1] && a[1] == a[2] && a[2] != a[3]) || (a[0] == a[1] && a[1] != a[2] && a[1] == a[3]) || (a[1] == a[2] && a[2] == a[3] && a[0] != a[1]) || (a[0] == a[2] && a[2] == a[3] && a[0] != a[1]))
        printf("R\n");
    else if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3]  && a[1] != a[2] && a[1] != a[3] && a[2] != a[3])
        printf("R\n");
    else {
        if (a[2] + a[3] > big && a[0] == a[1])
            big = a[2] + a[3];
        if (a[1] + a[3] > big && a[0] == a[2])
            big = a[1] + a[3];
        if (a[1] + a[2] > big && a[0] == a[3])
            big = a[1] + a[2];
        if (a[0] + a[3] > big && a[2] == a[1])
            big = a[0] + a[3];
        if (a[0] + a[2] > big && a[3] == a[1])
            big = a[0] + a[2];
        if (a[0] + a[1] > big && a[2] == a[3])
            big = a[0] + a[1];
        printf("%d\n", big);
    }
}