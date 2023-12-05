//Write a C program to print the string after deleting the vowel
#include<stdio.h>
#include<string.h>
int main(){
	char ch[50],temp[2][50];
	printf("enter string : \n ");
	scanf(" %[^\n]s",ch);
	int l=strlen(ch);
	for (int j=0,k=0,i=0;i<=l;i++){
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
			temp[0][j++]=ch[i];
		}
		else if(i==l){
			temp[0][j]='\0';
			temp[1][k]='\0';
		}
		else 		{
			temp[1][k++]=ch[i];
		}
		
	}
	printf("%s\n",temp[0]);
	printf("%s\n",temp[1]);
	
	for(int i=0;i<strlen(temp[1]);i++){
		ch[i]=temp[1][i];
			}

for(int i=0;i<strlen(temp[1]);i++){
	printf("%c",ch[i]);
}
	
	
	return 0;
}