//Write a C program to print the first occurrence of the character in the given string without using strchr
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    char key;
	printf("enter the string length\n");
	scanf("%d",&n);
    char str[n+1];
    printf("enter the key\n");
	scanf("%c",&key);
	printf("enter the string \n");
    
	for (int i=0;i<n+1;i++)
		{
			scanf("%c",&str[i]);
		}
    for(int j=0;j<n+1;j++){
        if(key==str[j]){
            printf("the index is : %d",j);
            return 0;
        }
    }
    return 0;
}