#include<stdio.h>
int main(){
    int n,r;
    printf("enter");
    scanf("%d",&n);
    r=n%10;
    while(n/10!=0)
    {
        n=n/10;
    }
    printf("sum: %d",n+r);
    return 0;
}