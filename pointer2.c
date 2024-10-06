#include <stdio.h>
#include <stdlib.h>



int main(){
	int *min;
	int n;
	int d1[n];
	int d2[n];
	int *pt;
	int i;
	
	printf("kaç sayi gireceksiniz");
	scanf("%d",&n);
	
	printf("diziyi giriniz");
	
	for(pt=d1;pt<d1+n;pt++){
		scanf("%d",pt);
		
	}
	
	for(i=0;i<n;i++){	
	min=d1;
	for(pt=d1;pt<=d1+n;pt++){
		if(pt==d1+n){
			for(pt=d1;pt<=d1+n;pt++)
		}
		if(*pt==-1)
		continue;
		else if(*pt<min){
			*min=*pt;
		}
	}
	d2[i]=*min;
	
	
}
	
	
	
	for(pt=d2;pt<d2+n;pt++){
		printf("%d ",*pt);
		
	}	
	
	
	
	
	
	
	return 0;
}
