#include <stdio.h>  
#include <ctype.h>  
int main() {  
    char tmp;  
    int a[11];  
    for (int i = 0; i < 10; i++) {  
        scanf("%c", &tmp);  
        if (tmp == ' ') {  
            i--;  
            continue;  
        }  
        else if (tmp == 'X')  
            a[i] = 10;  
        else  
            a[i] = tmp - 48;  
    }  
    int b[11];  
    b[0] = a[0];  
    for (int i = 1; i < 10; i++) {  
        b[i] = a[i] + b[i - 1];  
    }  
    int sum = 0;  
    for (int i = 0; i < 10; i++)  
        sum = sum + b[i];  
    if (sum % 11 == 0)  
        printf("YES\n");  
    else  
        printf("NO\n");  
}