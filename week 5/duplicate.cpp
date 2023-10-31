#include<stdio.h>
int main(){
 int n,j,k;
 int arr[n];
 printf("enter size");
 scanf("%d",&n);
 for (int i=0;i<n;i++){
 	scanf("%d",&arr[i]);
 }
 printf("the duplicate elements are : \n");
 for(int i=0;i<n;i++){
 	for(int j=i+1;j<n;j++){
 		if((i!=j)&&(arr[i]==arr[j])){
 			printf("%d  ",arr[j]);
		 }
	 }
 }
	return 0;
}
