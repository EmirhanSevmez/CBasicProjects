#include <stdio.h>

int main(){
	
int x,y;
printf("bir koordinat giriniz");
scanf("%d%d",&x,&y);
// (2,9) (2,4) (8,9) (8,4)
if (x<=8 && x>=2){
	if (y<=9 && y>=4)
	printf("icinde"); 
	else
	printf("disinda");
}
	else
	printf("disinda");
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
