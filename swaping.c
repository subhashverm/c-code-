#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the vale of a,\n");
scanf("%d%d",&a,&b);
//temp=a;
//a=b;
//b=temp;
a=a-b;
b=b+a;
a=b-a;
printf("the vale of a,b is =%d\n%d\n",a,b);
return 0;
}