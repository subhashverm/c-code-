#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randumnumber(int n)
{
    srand(time(NULL));
    return rand() %n;
}
int main()
{

printf("your random number is =%d",randumnumber(5));
return 0;
}