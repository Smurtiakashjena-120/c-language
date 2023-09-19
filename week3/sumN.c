#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter the number upto which you want sum:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s=i+s;

    }
    printf("the sum is :%d",s);

    return 0;
}