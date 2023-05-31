#include<stdio.h>

int main(){
	
	int b_s;
	float hra,da,ta,g_s;
	
	printf("enter the salary:");
	scanf("%d",&b_s);
	
	hra=(10.0/100.0)*b_s;
	da=(5.0/100.0)*b_s;
	ta=(8.0/100.0*b_s);
	
	g_s=b_s+hra+da+ta;
	
	printf("the gross salary is : %.1f",g_s);
	
return 0;
	
}
