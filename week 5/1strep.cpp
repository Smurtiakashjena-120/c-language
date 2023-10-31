#include<stdio.h>
int main(){
	int arr[]={10,3,5,3,4,3,5,6};

int n=8;
	for (int i=0;i<n;i++){
	
		
		for(int j=0;j<n;j++){
			if((i!=j)&&(arr[i]==arr[j])){
				printf("%d",arr[i]);
				return 0;
				}
		}
	
	}
	return 0;
}
