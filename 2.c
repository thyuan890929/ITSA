#include<stdio.h>
int main() {
    int A;
    while(scanf("%d", &A) != EOF) {
        double B = A * 1.6 ;
        printf("%.1f\n", B);
    }
}
