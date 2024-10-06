#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	int b,n,i,*ptr,d=0;
	printf("objelerin sayisini giriniz");
	scanf("%d",&n);
	ptr=((int*)calloc(n,sizeof(int)));
	
	if(ptr==NULL){
		printf("yetersiz depolama alani");
		exit(0);
}
	
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	b=*ptr;
	for(i=0;i<n;i++){
		if(*(ptr+i)>b)
		b=*(ptr+i);
	}
	printf("%d",b);
	
	free(ptr);
	return 0;
	
	
	
	
	
	
	
	
}
