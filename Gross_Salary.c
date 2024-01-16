#include<stdio.h>
int main()
{
    float bs, gs;
    scanf("%f",&bs);
    if (bs<=10000)
    {
        printf("%.2f",bs+(bs*80)/100+(bs*20)/100);
    }
    else if (bs<=20000)
    {
        printf("%.2f",bs+(bs*90)/100+(bs*25)/100);
    }
    else
    {
        printf("%.2f",bs+(bs*95)/100+(bs*30)/100);
    }
}