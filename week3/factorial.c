#include<stdio.h>
int main()
{
    int i,n,s=1;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i*s;

    }
    printf("the factorial is :%d",s);

    return 0;
}