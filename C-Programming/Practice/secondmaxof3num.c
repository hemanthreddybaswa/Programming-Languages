//Second largest among three numbers
#include"stdio.h"
#include"conio.h"
int main(){
	int a,b,c,smax;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=b && a>=c){
		if(b>c)	smax=b;
		else smax=c;
	}
	else if (b>=a && b>=c){
		if(a>c) smax=a;
		else smax=c;
	}
	else{
		if (a>b) smax=a;
		else smax=b;
	}
	printf("Second Largest number: %d ",smax);
	
	getch();
	
			
}
