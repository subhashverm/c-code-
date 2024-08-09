#include<stdio.h>
int main()
{
    int n,r,i,s[10]={0,0,0,0,0,0,0,0,0,0};
    printf("enter numbers ");
    scanf("%d",&n);
while (n>0)
{
    r=n%10;
    for(i=0;i<=9;i++)
    {
        if(r==i)
        s[i]=s[i]+1;
    }
n=n/10;
}
for(i=0;i<=9;i++)
{
    printf("%d is %d times",i,s[i] );
}
return 0;
}