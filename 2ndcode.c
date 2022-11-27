//wap to printf the result of add,sub,mul,divi of two different number taken from the user;;;
#include<stdio.h>

int main()
{
    int a,b,c,d,e;float f;
    printf("enter the a and b:");
    scanf("%d\t %d",&a,&b);
    c = a+b;
    d=a-b;
    e=a*b;
    f=(float) a/b;
    printf("the additon is %d",c);
    printf("\nthe sub is %d",d);
    printf("\nthe multiplication is %d",e);
    printf("\nthe division is %f",f);


    return 0;
}