//Write a C program to reverse a string without using string functions
//string input will not work for space
#include<stdio.h>
#include<string>
int main(){
	int n;
	printf("enter the string length\n");
	scanf("%d",&n);
	char str[n+1];
	char rev[n+1];
	printf("enter the string \n");
	for (int i=0;i<n+1;i++)
		{
			scanf("%c",&str[i]);

		}
	
	for (int i=0;i<n+1;i++){
	rev[n-i]=str[i];
	}
	printf(" the reversed string: \n");
	for (int i=0;i<n+1;i++)
		{
		printf("%c",rev[i]);

		}
	return 0;
}