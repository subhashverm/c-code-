#include <stdio.h>
int main()
{
    int a[50], size, pos, num;
    printf("enter the size of array\n ");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("overfloew");
    }
    else
    {
        printf("the array alments are \n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("enter the position of alement to delete form array\n");
        scanf("%d", &pos);
        if (pos > size+1 || pos <= 1)
        {
            printf("invalid entered ");
        }
        else
        {
            printf("enter the value of number which is entered in aaray\n ");
            scanf("%d", &num);
            for (int i = size - 1; i = pos - 1; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos - 1] = num;
            size++;
            printf("print after insertion \n");
            for (int i = 0; i < size; i++)
            {
                printf("%d", a[i]);
            }
        }
    }
    return 0;
}