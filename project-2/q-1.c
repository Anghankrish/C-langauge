#include<stdio.h>

int main(){
	
	char value;
	
	printf("enter the character : ");
	scanf("%c",&value);
	
	if(value>='a' && value<='z')
	{
	printf("the input is alphabet");
    }

	else if(value>='A' && value<='Z')
	{
	printf("the input is alphabet");
	}
	
	else if(value>='1' && value<='9')
	{
	printf("the input is digit");
	}
	
	else
	{ 
	printf("the input is special charcter");
	}	
	return 0;
}
