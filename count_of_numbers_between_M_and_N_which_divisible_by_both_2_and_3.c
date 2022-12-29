#include<stdio.h>
int main()
{
    int a,s,i,c;
    c=0;
    scanf("%d%d",&a,&s);
    for(i=a;i<s;i++)
    {
        if(i%2==0&&i%3==0)
        c++;
    }
     printf("%d",c);
}