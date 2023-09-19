#include<stdio.h>
int main ()
{
    int n,l=0;
    printf("enter the number:");
    scanf("%d",&n);
    for (;n>0;)
    {
        n=n/10;
        l++;
    }
    printf("the len is: %d",l);

    return 0;
}