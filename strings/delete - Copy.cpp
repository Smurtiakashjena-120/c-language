//Write a C program to remove all repeated characters from a string.
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter the string : \n");
	gets(str);
	int l=strlen(str);
	for(int i=0;i<strlen(str);i++){
		for(int j=i+1;j<l;j++){
			if(str[i]==str[j] && str[i]!=' '){
				str[j]=' ';
		}
	}}
	printf("%s\n",str);
	
		for(int i=0;i<l;i++){
		if(str[i]==' '){
			char temp;
			for(int j=i;j<l;j++){
				temp=str[j+1];
				str[j+1]=str[j];
				str[j]=temp;
			}
			
		}
	}
	
	printf("%s",str);	
	
	return 0;
}