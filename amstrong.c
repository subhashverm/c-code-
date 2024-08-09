#include<stdio.h>
int main()
{
    int r,s=0,t,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    printf("your ans is =%d\n",s);
    if (t==s)
    {
        printf("amstrong number ");
    }
    else
    {
        printf(" not amstrong ");
    }
    return 0;
    }