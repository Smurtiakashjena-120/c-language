//C program to convert decimal number to binary number.
#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,o=0,i=0;
    printf("enter :");
    scanf("%d",&n);
     for(;n>0;)
    {
        m=n%2;
         n=n/2;
         float p= (m*pow(10,i));
        o=o+p;
        i=i+1;
        // printf("%d \n",p);

    }

 printf("%d",o);
    return 0;
}