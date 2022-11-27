//wap to swap the two number using the third one,,,
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter first mo.:");
    scanf("%d",&a);
    printf("enter secon mo.:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the number after swap ");
    printf("\n the first is %d & the second become %d",a,b);

    return 0;
}