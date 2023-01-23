#include<stdio.h>
int main()
{
    float a,b,h,l;
    scanf("%f%f%f",&l,&b,&h);
    a=((l+b)/2)*h;
    printf("%.4f",a);
}