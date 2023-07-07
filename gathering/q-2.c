#include<stdio.h>

sum(int dc[],int x){
	
	int c=0,i;
	for(i=0;i<x;i++){
		c+=dc[i];
		
	}
	printf("sum : %d",c);
	
}
int main(){
	
	int n;
	printf("enter size :");
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0;i<n;i++){
		printf("enter the value :");
		scanf("%d",&arr[i]);
	}
	sum(arr,n);
     
     return 0;
}
