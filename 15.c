#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<ctype.h>  
int main() {  
    int sp = 0, *a = calloc(26, sizeof(int));  
    char str[101];  
    fgets(str, 100, stdin);  
    int len = strlen(str);  
    for (int i = 0; i < len; i++) {  
        if (str[i] == ' ')  
            sp++;  
        else if (isalpha(str[i])) {  
            str[i] = tolower(str[i]);  
            a[str[i] - 'a']++;  
        }  
    }  
    printf("%d\n", sp + 1);  
    for (int i = 0; i < 26; i++)  
        if (a[i] > 0)  
            printf("%c : %d\n", i + 'a', a[i]);  
}  