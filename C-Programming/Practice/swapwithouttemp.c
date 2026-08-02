//Swap without temp
#include"stdio.h"
#include"conio.h"
int main(){
	int a=20,b=10;
	printf("a : %d b : %d \n",a,b);
	a=a+b;	//a=30
	b=a-b;	//b=20
	a=a-b;	//a=10
	printf("After Swapping: \n");
	printf("a : %d b : %d \n",a,b);
	getch();
	return 0;
}
	
