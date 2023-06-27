#include<stdio.h>
#include<string.h>

int main(){
	
	char correctmail[]="anghankrish1901@gmail.com";
	char correctpass[]="19krish08&";
	
	char a[50];
	char b[50];
	
	printf("enter email :");
	scanf("%s", a);
	
	printf("enter pass :");
	scanf("%s", b);
	
	int A = strcmp(correctmail,a);
	
	int B = strcmp(correctpass,b);
	
	if(a == 0 && b == 0 ){
		
		printf("\n\tlogin successful");
	}
	else{
		
		printf("\n\tplease enter valid email or pass");
		 
	}	
	return 0;
}
