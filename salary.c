#include<stdio.h>
int main ()
{
    int at[15],bt[15],n;
printf("enter the processes ");
scanf("%d",&n);
printf("enter the processes id\n ");
for(int i=0;i<=n-1;i++)
{
scanf("%d",&at[i]);
}
printf("enter the burst time of the processes\n ");
for(int i=0;i<=n-1;i++)
{
    scanf("%d",&bt[i]);

}
int ct[n];
ct[-1]=0;
printf("the complition time of the processes\n");
for(int i=0;i<=n-1;i++)
{
    ct[i]=ct[i-1]+bt[i];
    printf("%d\n",ct[i]);
}
printf("the value of trun ariund time of the all processes\n");
int tat[n] ;
for(int i=0;i<=n-1;i++)
{
    tat[i]=(ct[i]-at[i]);
    printf("%d\n",tat[i]);


}
printf("the wating time of all processes are :\n");
int wt[n] ;
for(int i=0;i<=n-1;i++)
{
    wt[i]=(tat[i]-bt[i]);
    printf("%d\n",wt[i]);
}
  
return 0;

}