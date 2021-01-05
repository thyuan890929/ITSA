#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000];
    while (fgets(a, 1000, stdin) != NULL) {
        int size = 0, len = strlen(a);
        double avg = 0.0;
        char n[110], *ptr = a;
        while (*ptr != '\n' && ptr < a + len) {
            char *qtr = n;
            while (*ptr != ' ' && *ptr != '\n')
                *qtr++ = *ptr++;
            *qtr = '\0';
            ptr++;
            avg = avg + atoi(n);
            *n = '\n';
            size++;
        }
        printf("Size: %d\n", size);
        printf("Average: %.3lf\n", avg / size);
    }
}