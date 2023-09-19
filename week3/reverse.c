#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,rev=0;
    printf("enter the number:");
    scanf("%d",&m);
    for(;m>0;)
    {
        n=m%10;
        m=m/10;
        rev=rev*10+n;

    }
    
    
        printf("reverse is :%d",rev);
   
    return 0;
}
