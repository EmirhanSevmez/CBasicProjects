#include <stdio.h>

int main(){
	
	int n,i,a,b;
	
	for(n=1;n<=10000;n++){
		a=0;
		for(i=1;i<n;i++){
			if(n%i==0)
			a+=i;
		}
		if(a==n)
		printf("%d\n",a);
		else
		continue;
	}
	
	
	
	return 0;
} 
