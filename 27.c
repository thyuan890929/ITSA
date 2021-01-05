#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[5], cmp[5];
    int a, b;
    scanf("%s\n", str);
    while (scanf("%s\n", cmp) != EOF) {
        if (strcmp(cmp, "0000") == 0)
            break;
        int len = strlen(cmp);
        a = 0;
        b = 0;
        for (int i = 0; i < len && cmp[i] != '\n'; i++) {
            if (str[i] == cmp[i])
                a++;
            else
                for (int j = 0; j < strlen(str); j++)
                    if (cmp[i] == str[j]) {
                        b++;
                        break;
                    }
        }
        printf("%dA%dB\n", a, b);
    }
}