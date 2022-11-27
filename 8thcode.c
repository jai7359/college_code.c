//to dinf the laargest number among 3 number given by user
#include<stdio.h>

int main()
{
    int a,b,c,max;
    printf("enter the 1st number:");
    scanf("%d",&a);
    printf("\nenter the 2nd number:");
    scanf("%d",&b);
    printf("\nenter the 3rd number:");
    scanf("%d",&c);

    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\n the max is %d",max);

    return 0;
}