#include<stdio.h>

int main(){
	
	int a,b,c;
	 
	printf("enter A :");
	scanf("%d",&a);
	
	printf("enter B :");
	scanf("%d",&b);
	
    	printf("enter C :");
	scanf("%d",&c);
	
	
	a>b ? 
	    a>c? 
		    printf("a is max")
		: 
			printf("c is max")
:   b>c ?
		    printf("b is max") 
		: 
			printf("c is max");
	
	return 0;

}
