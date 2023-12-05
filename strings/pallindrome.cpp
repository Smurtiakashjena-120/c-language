//Write a C program to check whether the given string is palindrome or not
#include<stdio.h>
#include<string>
int main(){
	int n,c=0;
	printf("enter the string length: \n");
	scanf("%d",&n);
	char str[n+1];
	printf("enter the string : \n");
		scanf("%s",str);
		for(int i=0;i<n/2;i++){
			if(str[i]!=str[n-1-i]){
					printf("not a pallindrome");
					break;
			}
			else
		c++;
		}
		if(c==n/2)
		printf("it is a pallindrome");
	return 0;
}