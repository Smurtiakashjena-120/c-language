#include<stdio.h>
int main(){
    int i,j,n=3,l=6;
    
    
    
    for (i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        printf("%d",n);
        n=n+1;
        printf("\n");
    }
    for (i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        printf("%d",l);
        l=l-1;
        printf("\n");
    }
    return 0;
}