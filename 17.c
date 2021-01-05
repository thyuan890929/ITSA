#include<stdio.h>  
#include<string.h>  
#include<ctype.h>  
int main() {
    int c = 0;
    char a[1000][1000], str[10000];
    char *token = NULL;
    fgets(str, 10000, stdin);
    int len = strlen(str);
    for (int j = 0; j < len; j++)
        str[j] = tolower(str[j]);
    token = strtok(str, " \r\n");
    while (token != NULL) {
        int j = 0;
        for (int i = 0; i < c; i++)
            if (strcmp(a[i], token) == 0) {
                j = 1;
                break;
            }
        if (j == 0) {
            strcpy(a[c], token);
            c++;
        }
        token = strtok(NULL, " \r\n");
    }
    for (int i = 0; i < c; i++) {
        if (i == c - 1)
            printf("%s\n", a[i]);
        else
            printf("%s ", a[i]);
    }
}