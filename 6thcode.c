////wap to swap the two number without using  the third one,,,
#include<stdio.h>

int main()
{
    int a,b;
    printf("enter first mo.:");
    scanf("%d",&a);
    printf("enter secon mo.:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the number after swap ");
    printf("\n the first is %d & the second become %d",a,b);

    return 0;
}