#include<stdio.h>
int main() {
    int num;
    while(scanf("%d", &num) != EOF) {
        int sum = 0;
        for(int i = 1; i <= num ; i++)
            if (i % 3 == 0)
                sum = sum + i;
        printf("%d\n", sum);
    }
}
