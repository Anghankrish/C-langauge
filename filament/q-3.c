#include<stdio.h>

int main(){
	
	char val[1000],i;
	
	printf("enter value :");
	scanf("%s",&val);
	

	
	for(i=1 ; i<strlen(val); i++){
		
			if(val[i]>='a' && val[i]<='z'){
		val[i]-=32;
		
		elseif(val[i]>='A' && val[i]<='Z')
		{
			val[i]+=32;
		}
	}
	

}
	printf("%s",val);
	
	return 0;
}
