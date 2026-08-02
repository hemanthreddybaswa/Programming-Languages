//Swap two numbers
#include"stdio.h"
#include"conio.h"
int main(){
	int a=10,b=20;
	printf("a : %d b : %d \n",a,b);
	printf("After Swapping:\n");
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("a : %d b : %d \n",a,b);
	
	getch();
	return 0;
}
