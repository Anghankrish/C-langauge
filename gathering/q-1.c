#include<stdio.h>

fact ( int(a))
{
	if(a>=1){
		return a*fact(a-1);
		
	}
	else{
		return 1;
	}
}
int main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	printf("%d",fact(n));
	
	return 0;
}
