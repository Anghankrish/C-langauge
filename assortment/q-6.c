#include <stdio.h>

int main() {
	
	int i,j,m,n,sum=0;
    
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of column: ");
    scanf("%d",&n);
    
    int a[m][n];

    printf("Enter element of matrix: \n ");
    for(i=0;i<m;i++){
	     	
		 	for(j=0;j<n;j++){
			
			printf("[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
	
			}
		}
    printf("\nOriginal matrix:\n");
	 for(i=0;i<m;i++){
	     	
		 	for(j=0;j<n;j++){
			
			printf("%d",a[i][j]);
			}
			printf("\n");
		}
    for (i=0 ; i<m ; i++) {
        sum = sum + a[i][i];
    }

    printf("\nSum of diagonal elements: %d\n", sum);

    return 0;
}

