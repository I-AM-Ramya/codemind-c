#include<stdio.h>
int main()
{
    int s,x,y;
    scanf("%d",&s);
    x=s%3600;
    y=x%60;
    printf("H:M:S-%d:%d:%d",s/3600,x/60,y);
}