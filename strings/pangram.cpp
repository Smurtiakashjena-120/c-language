//Write a C program to check if a given string is pangram or not. A pangram is a sentence containing every letter 
#include<stdio.h>
#include<string.h>
//65-90,97-122
int main(){
	char alpha[53];
	for(int i=65,k=97,j=0;j<=52;j++){
		
		if(j<26){
			alpha[j]=i++;
		}
		else if(j<52)
		alpha[j]=k++;
		else
		alpha[j]='\0';
		
	}
char input[100];
printf("enter: \n");
scanf("%[^\n]s",input);
for(int i=0;i<strlen(input);i++){
	for(int j=0;j<52;j++)
	if((input[i]==alpha[j])||(input[i]-32==alpha[j])||(input[i]+32==alpha[j])){
		alpha[j]=' ';
	}
}
int w=0;
for(int i=0;i<52;i++){
	if(alpha[i]!=' '){
		printf("not a pangram");
		return 0;
	}
	
	else
	w++;
	
}
if(w==52)
printf("pangram");
	

return 0;
	
}