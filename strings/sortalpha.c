//Write a C program to sort the characters in a string in lexicographical order (dictionary order)
#include<stdio.h>
#include<stdlib.h>
int main(){
   int n,count=0;
    printf("enter the size \n");
    scanf("%d",&n);
    char str[n+1];
     printf("enter the string \n");
     fflush(stdin);
    for(int i=0;i<n+1;i++){
        scanf("%[^\n]s",str);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1]){
                char t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
    for(int i=0;i<n+1;i++){
        printf("%c",str[i]);
    }
    return 0;
}