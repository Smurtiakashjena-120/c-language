#include<stdio.h>
int main()
{
    int n,i=1;

    printf("enter the no upto which you want to print even no: ");
    scanf("%d",&n);
    for ( i = 1;i<=n;i++)
    {
        if (i%2==0)
        {
            printf("%d \n",i);
        }
        
    }
    return 0;

}