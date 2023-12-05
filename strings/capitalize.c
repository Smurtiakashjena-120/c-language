//Write a C program to capitalize first letters of each word in a given string
#include<stdio.h>
#include<stdlib.h>
int main(){
   int n;
    printf("enter the size \n");
    scanf("%d",&n);
    char str[n+1];
     printf("enter the string \n");
     fflush(stdin);
    for(int i=0;i<n+1;i++){
        scanf("%c",&str[i]);
    }
    for(int i=0;i<n+1;i++){
       if(str[i]==' '){
        str[i+1]=str[i+1]-32;
       }
       else if(i==0)
        str[i]=str[i]-32;
    }
    for(int i=0;i<n+1;i++){
        printf("%c",str[i]);
    }
    
    
    return 0;
}