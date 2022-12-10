#include<stdio.h>
int main()
{
    int e,h,x,t;
    scanf("%d%d%d",&t,&e,&h);
    x=e*1+h*2;
    if(x>=t)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    
}