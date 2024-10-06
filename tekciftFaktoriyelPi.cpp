#include <stdio.h>

void tekcift(int n);
int faktoriyel(int n);
int pi(int n);
int main(){
	int n,k;
	printf("bir sayi giriniz");
	scanf("%d",&n);
	printf("1)tek cift 2)faktoriyel 3)pi\n");
	scanf("%d",&k);
	if(k==1)
		tekcift(n);
		
	else if(k==2)
		printf("%d",faktoriyel(n));
	
	else if(k==3)
	printf("%d",pi(n));
	
	else
	printf("gecersiz kodlama");
	
	
	
	
	
	
	return 0;
}


void tekcift(int n){
	
	if(n%2==0)
	printf("cift");
	else
	printf("tek");
}

int faktoriyel(int n){
	int i,sonuc=1;
	for(i=1;i<=n;i++)
	sonuc*=i;
	return sonuc;
}

int pi(int n){
	float sonuc;
	sonuc=n*3.14;
	return sonuc;
}
