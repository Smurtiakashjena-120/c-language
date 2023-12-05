//Write a C program to find the most and least repeated characters 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size \n");
    scanf("%d",&n);
    char max,min,str[n+1];
     printf("enter the string \n");
     fflush(stdin);
    for(int i=0;i<n+1;i++){
        scanf("%c",&str[i]);
    }
    int  maxcount=0,mincount=n;
    for(int i=0;i<n+1;i++){
        int count=0;
        for(int j=0;j<n+1;j++){
          if(str[i]==str[j]){
            count++;
          }
        }
        if(count>maxcount){
            maxcount=count;
            max=str[i];
        }
        if(count<mincount){
            mincount=count;
            min=str[i];
        }
    }
    printf("the most rep: %c \n",max);
        printf("the least rep: %c \n",min);

    return 0;
}