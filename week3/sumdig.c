#include<stdio.h>
int main()
{
    int n,m,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    for (;n>0;)
    {
        m=n%10;
        n=n/10;
        s+=m;
    }
    printf("the sum of the digit of the number is: %d",s);
     return 0;
}
