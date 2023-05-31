#include<stdio.h>

int main(){
	
	int a=20;
	int b=10;
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("A: %d\n",a);
	printf("B: %d\n",b);
	
	return 0;
	
	
}
