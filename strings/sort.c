//Write a C program to sort words 
#include<stdio.h>
#include<string.h>
int main(){
     char str[100],p[50][50];
     int index=0,space=0;
      printf("Enter the string\n");
    scanf(" %[^\n]s",str);
     
     for (int i = 0;i < strlen(str);i++)
    {
        if ((str[i] == ' '))
        {
            space++;
        }
    }

    for (int i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
        if ((str[j] == ' '))  
        {    
            p[i][k] = '\0';
            i++;
            k = 0;
        }        
        else
             p[i][k++] = str[j];
    }
     for (int i=0;i<space;i++){
     	for(int j=i+1;j<=space;j++){
     		if(strcmp(p[i],p[j])>0){
     			char cmp[50];
     			strcpy(cmp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], cmp);
			 }
		 }
	 }
	 for (int i=0;i<=space;i++){
	 	printf("%s",p[i]);
	 	printf("\n");
	 }
	return 0;
}