#include <stdio.h>
struct student
{
    char name[45];
    int roll_number;
    float percentage;
};

int main()
{
    struct student s1;
    printf("enter your name \n");
    scanf("%s", &s1.name);
    printf("enter your roll number\n ");
    scanf("%d", &s1.roll_number);
    printf("enter you percentage\n ");
    scanf("%f", &s1.percentage);
    printf("your name =%s\n", s1.name);
    printf("your roll number  =%d\n", s1.roll_number);
    printf("your name =%f\n", s1.percentage);
    return 0;
}