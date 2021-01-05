#include<stdio.h>
int main()
{
    int h1, m1, h2, m2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    int sum = 0, time = 0;
    time = (h2 - h1) * 60 + m2 - m1;
    if(time  > 240 ) {
        sum += ((time - 240) / 30) * 60;
        time = 240;
    }
    if(time > 120 && time <= 240) {
        sum += ((time - 120) / 30) * 40;
        time = 120 ;
    }
    if(time <= 120)
        sum += (time / 30) * 30 ;
    printf("%d\n", sum);
}
