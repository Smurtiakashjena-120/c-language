/*Write a C program to check if two given Strings are Isomorphic to each other. Two strings str1 and str2 are called isomorphic if there is a one-to-one mapping possible for every
character of str1 to every character of str2. And all occurrences of every character in ‘str1’ map to the
same character in ‘str2’. Input: str1 = “aab”, str2 = “xxy”*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str1[20],str2[20];
	fflush(stdin);
	printf("enter string: \n");
	scanf("%[^\n]s",str1);
	fflush(stdin);
	printf("enter string: \n");
	scanf("%[^\n]s",str2);
	if(strlen(str1)!=strlen(str2)){
		printf("not isomorph");
		return 0;
	}
	//aab xxy
	int cas;
	for(int i=0;i<strlen(str1);i++){
		int diff=str1[i]-str2[i];
		for(int j=i+1;j<strlen(str1);j++){
			if(str1[j]==str1[i]){
				if((str1[j]-str2[j])!=diff){
					printf("not isomorph");
					return 0;
				}
				else
				cas=1;
				
			}
		}
		cas=0;
	}
	if(cas==0)
	printf("isomorph");
	return 0;
}