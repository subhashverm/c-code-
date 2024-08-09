#include <stdio.h>
int main()
{
    int a[100], size, pos, num;
    printf("enter the size of arraay you want\n");
    scanf("%d", &size);
    if (size > 100)
    {
        printf("overflow");
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
           
        }
         for (int i = 0; i < size; i++)
         {
           printf("%d,",a[i]);
         }
        printf("enter the position where you insert the number\n ");
        scanf("%d", &pos);
        if (pos > size + 1 || pos <= 0)
        {
            printf("invaled ");
        }
        else
        {
            printf("enter the number ");
            scanf("%d", &num);
            for (int i = size - 1; i >= pos - 1; i--)
            {
            a[i+1]=a[i];
            }
             a[pos - 1] = num;
             size++;
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d,", a[i]);
        }
    }
    return 0;
}