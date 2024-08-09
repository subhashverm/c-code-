#include<stdio.h>
#include<stdlib.h>
int palindrome(int num)
{
    int revnum=0;
    int orignalnumber=num;
    while (num>0)
    {
    revnum=revnum*10 + num%10; 
    num=num/10;
    }
    printf(" your reversed number is %d\n",revnum);
    if (orignalnumber==revnum)
    {
        return 1;
    }
    else{
    return 0;
    }
}
int main()
{
int number ;
printf("enter a number to chack number it is palindromr or not\n ");
scanf("%d",&number );
if (palindrome(number))
{
    printf(" number is palindrome ");
}
else{
    printf(" number is not palindrome ");
}
return 0;
}