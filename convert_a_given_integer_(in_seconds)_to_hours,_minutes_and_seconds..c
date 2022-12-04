#include<stdio.h>
int main()
{
    int i,h,m;
    scanf("%d",&i);
    h=i/3600;
    m=(i-(3600*h))/60;
    i=(i-(3600*h)-(m*60));
    printf("H:M:S-%d:%d:%d",h,m,i);
    
}