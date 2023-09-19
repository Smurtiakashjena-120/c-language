#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,l=0,s=0;
scanf("%d",&n);
 for (;n>0;)
    {
        n=n/10;
        l++;
    }
    printf("the length is %d \n",l);
for (;l>0;)
{
    r=n%10;
    s=s+r;
    n=n/10;
    l=l-1;
}
printf("the sum is %d",s);


    return 0;
}