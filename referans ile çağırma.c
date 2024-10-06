#include <stdio.h>
#include <stdlib.h>

int bolme(int *a,int*b) {
	
	int kalan,gecici;
	gecici=*a;
	*a=(*a)/(*b);
	kalan=gecici-((*a)*(*b));
	return kalan;
	
}

int main(){
	int a,b,c;
	printf("bolunen ve bolen sayi giriniz");
	scanf("%d%d",&a,&b);
	c=bolme(&a,&b);
	printf("bolum:%d kalan:%d",a,c);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
