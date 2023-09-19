//C program to convert binary number to decimal number
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,o=0,i=0;
    float p;
    printf("enter the binary number:");
    scanf("%d",&n);
    for(;n>0;)
    {
        m=n%10;
        n=n/10;
        p=(m*pow(2,i));
        o=o+p;
        i=i+1;


    }
    printf("the decimal is: %d",o);

    return 0;
}