#include <stdio.h>
int main()
{
    int a[200], size, pos, num;
    printf("enter the size of array \n");
    scanf("%d", &size);
    if (size > 200)
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
            printf("%d,%d\n",i, a[i]);
        }
        printf("enter the position where insert the value ");
        scanf("%d", &pos);
        if (pos > size+1|| pos <= 1)
        {
            printf("rong value entered");
        }
        else
        {
            printf("enter the value ");
            scanf("%d", &num);
            for (int i = pos-1 ; i>= size-1; i++)
            {
                a[i ]= a[i+1];
            }
    
            size--;
        }
        // for printing a inserted array:
        for (int i = 0; i < size; i++)
        {
            printf(",%d,", a[i]);
        }
    }

    return 0;
}