#include <stdio.h>

int main(){
	
	int n,j,i,f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(f=0;f<i;f++)
		printf(" ");
	for(j=0;j<n;j++)
	printf("*");
	printf("\n");
}
	
	
	
	
	
	
	return 0;
}
