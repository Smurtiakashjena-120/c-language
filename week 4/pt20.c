#include<stdio.h>
int main(){
    int i,j,n,s=0;
    printf("enter:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++){
        printf("%d  ",s+1);
        s+=1;
        }
        printf("\n");

    }
    return 0;
}
