#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for (i=n; i>=1; i--)
    {
        for (j=i; j>=1; j--)
        {
            printf("* ");
        }
        printf("
");
    }
}