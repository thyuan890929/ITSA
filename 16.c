#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char sub[129], str[513];
    char *ptr = str;
    scanf("%s %s", sub, str);
    int cnt = 0, len = strlen(sub), lens = strlen(str);
    while (ptr != NULL) {
        ptr = strstr(ptr, sub);
        if (ptr == NULL)
            break;
        if (ptr + len <= ptr + lens)
            ptr = ptr + 1;
        cnt++;
    }
    printf("%d\n", cnt);
}
