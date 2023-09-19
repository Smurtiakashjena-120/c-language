#include<stdio.h>
int main()
{
    int a=0,b=1,s,n,i;
    printf("enter the term you want to know:");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        s=a+b;
        a=b;
        b=s;


    }
    printf("the number is :%d ",s);


    return 0;
}