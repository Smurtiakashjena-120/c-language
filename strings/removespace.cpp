//. Write a C program to remove white spaces from a given string.
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter the string:\n");
	scanf("%[^\n]s",str);
	int i=0;
	for(int i=0;i<strlen(str);i++){
	
			if(str[i]==' '){
			char temp;
			for(int j=i;j<strlen(str)-1;j++){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		} 
	printf("%s",str);
	return 0;
}