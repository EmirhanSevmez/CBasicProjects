#include <stdio.h>

int main(){
	int t=0,i,n;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	if(n%i==0)
	t+=i;
	
	if(t==n)
	printf("muk");
	else
	printf("not muk");
	
	
	
return 0;	
}
