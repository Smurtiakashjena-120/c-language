#include<stdio.h>
int main(){
	int arr[]={12,3,4,1,6,9};
	int key,n=6,f;
	printf("enter sum:");
	scanf("%d",&key);
	for(int i=0;i<n;i++){
		f=0;
		for(int j=0;j<n;j++){
			if(arr[i]+arr[j]==key){
				printf( " %d and %d",arr[i],arr[j]);
				return 0;
			}
			
		}
		f++;		
	}
	
	return 0;
}
