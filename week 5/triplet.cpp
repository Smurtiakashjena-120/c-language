#include<stdio.h>
int main(){
	int arr[]={12,3,4,1,6,9};
	int key,n=6,f;
	printf("enter sum:");
	scanf("%d",&key);
	for(int i=0;i<n;i++){
		f=0;
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
			
			if(arr[i]+arr[j]+arr[k]==key){
				printf( " %d , %d and %d",arr[i],arr[j],arr[k]);
				return 0;
			}
		}
			
		}
		f++;		
	}
	if(f!=0){
		printf("false");
	}
	return 0;
}
