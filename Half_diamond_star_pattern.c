#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=3)
    {
    for(int i=1;i<=n;++i)
    {
    for(int j=1;j<=i;++j)
    {
    printf("*");
    }
    printf("
");
    }
    for(int a=n-1;a>=1;--a)
    {
    for(int b=1;b<=a;++b)
    {
    printf("*");
    }
    printf("
");
    }
    }
    else
    {
    printf("The pattern is not possible");
    }
}