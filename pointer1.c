#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int n;
	int d1[n];
	int i;
	int *pt;
	
	
	printf("kaç sayi gireceksiniz");
	scanf("%d",&n);
	
	printf("diziyi giriniz");
	for(pt=d1;pt<d1+n;pt++){
		scanf("%d ",&d1[i]);
		
	}
	
	
	
	for(pt=d1;pt<d1+n;pt++){
		printf("%d ",d1[i]);
		
	}	
	
	
	
	return 0;
}
