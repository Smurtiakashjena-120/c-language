//Write a C program to print the first capital letter in a given string
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter the string :\n");
	scanf("%[^\n]s",str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			printf("%c",str[i]);
			return 0;
		}
	}
	return 0;
}