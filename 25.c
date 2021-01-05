#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 
int main() { 
    int a; 
    char str[33]; 
    fgets(str, 33, stdin); 
    a = atoi(str); 
    for (int i = 0; i < a; i++) { 
        fgets(str, 33, stdin); 
        int len = strlen(str); 
        unsigned long long sum = 0; 
        for (int j = 0; j < len; j++) 
            if (str[j] >= 32 && str[j] <= '~') 
                sum = sum + str[j]; 
        printf("%lld\n", sum); 
    } 
}  