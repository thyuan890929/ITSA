#include<stdio.h>
int main() {
    int s;
    while(scanf("%d", &s) == 1) {
        if (s >= 3 && s <= 5)
            printf("Spring\n");
        else if (s >= 6 && s <= 8)
            printf("Summer\n");
        else if (s >= 9 && s <= 11)
            printf("Autumn\n");
        else
            printf("Winter\n");
    }
}
