#include<stdio.h>
int recursive(int a) {
    if(a == 0 || a == 1)
        return a + 1;
    else
        return recursive(a - 1) + recursive(a / 2);
}
int main() {
    int num;
    scanf("%d", &num);
    num = recursive(num);
    printf("%d\n", num);
}
