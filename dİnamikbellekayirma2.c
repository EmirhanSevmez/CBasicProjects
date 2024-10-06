#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	int n,i,*ptr,d=0;
	printf("objelerin sayisini giriniz");
	scanf("%d",&n);
	ptr=((int*)malloc(n*sizeof(int)));
	
	if(ptr==NULL){
		printf("yetersiz depolama alani");
		exit(0);
}
	
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		d+=*(ptr+i);
		
		
	}
	printf("%d",d);
	free(ptr);
	return 0;
	
	
	
	
	
	
	
	
}
