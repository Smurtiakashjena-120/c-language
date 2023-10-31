#include<stdio.h>
int main(){
	int arr[]={3,3,4,2,4,4,2,4,4};
	int count,n=9;
	for(int i=0;i<n;i++){
		 count=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
			
			count++;
		}
		}
		
		if(count>(n/2)){
			printf("majority is %d ",arr[i]);
			return 0;
		
		}
	}
	
	return 0;
}
