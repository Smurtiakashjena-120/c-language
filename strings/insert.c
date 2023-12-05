//Write a C program to insert a new character in a given string at a given position
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,p;
    printf("enter the size");
    scanf("%d",&n);
    char str[n+1],key;
    char new[n+2];
    
    
    printf("enter the string");
     fflush(stdin);
    for(int i=0;i<n+1;i++){
        scanf("%c",&str[i]);
    }
    printf("enter the char");
    fflush(stdin);
    scanf("%c",&key);
    printf("enter the position");
    scanf("%d",&p);
    //inserting 
    for(int k=0,i=0;i<n+2;i++){
        if(i!=p){
            new[i]=str[k];
            k++;
        }
        else
        new[i]=key;
        

    }
    printf("new string \n");
    for(int i=0;i<n+2;i++)
    printf("%c",new[i]);
    return 0;
}