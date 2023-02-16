#include<stdio.h>
int main()
{
    int factorial,n,i;
    int f=1;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    f=f*i;
    printf("the factorial is =%d",f);
}
