#include<stdio.h>

int main(){
	
	int arr[]={5,7,1,3,8,2,5,9,1,7,1,3};
    int n=12;
	int key,count=0;
	printf("enter the key \n");
	scanf("%d",&key);
	for(int i=0;i<n;i++){
		if(arr[i]==key){
		count+=1;	
		}
	}
	printf("the key %d is repeated %d times",key,count);
	
	
	return 0;
}
