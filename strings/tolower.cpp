//Write a C program to convert a string from upper case to lower case without using inbuilt function
#include<stdio.h>
#include<string>
int main(){
	int n;
	printf("enter the length of string");
	scanf("%d",&n);
    char str[n+1];
    printf("enter the string");
	scanf("%s",str);
	for (int i=0;i<n;i++){
		printf("%c",str[i]-32);
	}
	return 0;
	
}