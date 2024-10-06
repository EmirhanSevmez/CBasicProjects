#include <stdio.h>
/*int main()
{
int dizi[20]={9,9,3,3,3,3,6,6,5,5,0,0,0,0,0,1,1,3,3,3};

int i;

for(i=0;i<20;i++){
	if(dizi[i]==dizi[i+1])
	continue;
	else
	printf("%d ",dizi[i]);	
}


int main()
{
int dizi[20]={9,3,1,3,3,3,3,6,5,5,0,0,0,0,0,1,3,3,4,3};
int i,j;
for(i=0;i<20;i++){
	for(j=0;j<=20;j++){
		if(i==j)
		continue;
		else if(dizi[i]==dizi[j])
		break;
		if(j==20)
		printf("%d ",dizi[i]);		
	}
}
return 0;
}



int main()
{
int dizi[20]={9,9,3,3,3,3,3,6,5,5,0,0,0,0,0,1,1,3,3,3};
int i,j,x;
for(i=0;i<20;i++){
	x=0;
	for(j=0;j<=20;j++){		
    if(dizi[i]==dizi[i+j]){
	x++;
	continue;
	}
	else{
		printf("%d:%d\n ",dizi[i],x);
		i=i+x;
		
	}
	
	}
	
	
}
return 0;
}


int main()
{
int dizi[15]={9,8,1,3,6,5,2,3,2,0,7,1,5,7,3};


for(i=0;i<15;i++){
	n=dizi[0]
	if(dizi[i]>n)
	n=dizi[i];
	
	
}

int main(){

   int m1[3][5];
   int i,j,n,m,x;
   
   for(i=0;i<3;i++){
   	for(j=0;j<5;j++){
   		scanf("%d",&m1[i][j]);
	   }
   }
   
    for(n=0;n<5;n++){
    	x=0;
   	for(m=0;m<3;m++){
   		x+=m1[m][n];
	   }
	   printf("%d ",x);
   }





*/


int main(){
	int n,i;	printf("dizi kac elemanli");
	scanf("%d",&n);
	int d1[n];
    

	printf("\ndiziyi giriniz");
	for(i=0;i<n;i++)
	scanf("%d",d1[i]);
	
	for(i=0;i<n;i++){
		if(d1[i]>d1[i+1] && d1[i]>d1[i+2])
printf("%d ",d1[i]);
else if(d1[i+1]>d1[i] && d1[i+1]>d1[i+2])
printf("%d ",d1[i+1]);
else
printf("%d ",d1[i+2]);				
	}
	
return 0;
}



