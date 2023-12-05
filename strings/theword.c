//Write a C program to find the frequency of “the” word in a given lengthy string

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
    for(int i=0;i<n+1;i++){
       if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e')
       count ++;
    }
    printf("rep= %d",count);
    return 0;
}