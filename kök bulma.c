#include <stdio.h>
#include <math.h>
int main(){
	
	float a,b,c,d,kok1,kok2,kok,rp,ip;
	scanf("%f%f%f", &a, &b, &c);
	d=b*b-4*a*c;
	if (d>0){
		kok1= (-b+sqrt(d))/2*a;
		kok2= (-b-sqrt(d))/2*a;
		printf("kok 1 %f kok2 %f",kok1,kok2);
	}
	
	else if (d==0){
		
		kok=-b/2*a;
		printf("kok=%f",kok);
	}
	else {
		rp= -b/(2*a);
		ip= sqrt(-d)/(2*a);
		printf("kok1%f+%fi kok2%f-%fi",rp,ip,rp,ip );
		
		;
	}
	
	
	
	
	return 0;
}
