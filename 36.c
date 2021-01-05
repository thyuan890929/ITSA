#include <stdio.h>
int main(){
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0) break;
        if(a%400==0)
            printf("Bissextile Year\n");
        else if((a%100==0)&&(a%400!=0))
            printf("Common Year\n");
        else if((a%4==0)&&(a%100!=0))
            printf("Bissextile Year\n");
        else if(a%4!=0)
            printf("Common Year\n");
    }
    return 0;
}