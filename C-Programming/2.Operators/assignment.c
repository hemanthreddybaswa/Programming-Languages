//Assignment operators
#include"stdio.h"
#include"conio.h"
int main(){
	int a=10;
	int b=5;
	printf("a: %d\nb: %d\n",a,b);
	a+=b;
	
	printf("a+=b: %d\n",a);
	printf("a: %d\nb: %d\n",a,b);
	a-=b;
	printf("a-=b: %d\n",a);
	printf("a: %d\nb: %d\n",a,b);
	a*=b;
	printf("a*=b: %d\n",a);
	printf("a: %d\nb: %d\n",a,b);
	a/=b;
	printf("a/=b: %d\n",a);
	printf("a: %d\nb: %d\n",a,b);
	
	getch();


}
