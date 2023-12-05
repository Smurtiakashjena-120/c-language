//Write a C program to print the smallest and largest word in a given string
#include<stdio.h>
#include<string.h>
int main(){
     char str[100],p[50][50],maxm[20],minm[20];
     int index=0,space=0;
      printf("Enter the string\n");
    scanf(" %[^\n]s",str);
    int max=0,min=strlen(str);
     
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
    for(int i=0;i<space+1;i++){
    	if(strlen(p[i])<min){
    		min=strlen(p[i]);
    		strcpy(minm,p[i]);
		}
		if(strlen(p[i])>max){
    		max=strlen(p[i]);
    		strcpy(maxm,p[i]);
		}
	}
	printf("%s \n",maxm);
	printf("%s",minm);
    
    return 0;
}