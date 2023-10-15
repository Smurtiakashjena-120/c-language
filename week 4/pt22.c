#include<stdio.h>
int main(){
    int i,j,k;
    for(i=0;i<4;i++)
    {
        for(j=0;j<(2*i+1);j++)
        {
            if(j==1||j==3||j==5)
        printf("*");
        else
        printf("%d",i+1);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<(7-2*i);j++)
        {
            if(j==1||j==3||j==5)
        printf("*");
        else
        printf("%d",4-i);
        }
        printf("\n");
    }
    return 0;
}