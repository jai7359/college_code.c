//wap to convert the temp from c to f & vice verse,where input should be given by user;;;;
#include<stdio.h>

int main()
{
    float c,a,b;
    printf("please given input in celcius");
    scanf("%d",&c);
    a=(9*c)/5+32;
    printf("the conversion of c to f is :%f\n",a);
    b=(a-32)*5/9;
    printf("the convertion of f to c %f\n",b);
       
    return 0;
}