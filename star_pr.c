#include<stdio.h>
int main()
{
    int n=1,i,j;
  //first pattern
  /*1
  12
  123
  1234
  12345

  /*for(i=1;i<=5;i++)
   {

    for(j=1;j<i+1;j++)
    {
    printf("%d",j);
   }
   printf("\n");
   }
}
pattern no:2 
54321
4321
321
21
1   

{
for (i=1;i<=5;i++)
{
    for(j=i;j<=5;j++)
    {
    printf("%d",j);
   }
   printf("\n");
 }
 pattern no :3
 12345
 2345
 345
 45
 5
 

    for(i=1;i<=5;i++)
   {

    for(j=5-i;j>=0;j--)
    {
    printf("%d",j);
   }
   printf("\n");
   }
*/
pattern no:4
    for(i=1;i<=6;i++)
   {

    for(j=1;j<=i;j++)
    {
    printf(" %d ",n);
    n++;
   }
   printf("\n");
   }

   return 0;
}