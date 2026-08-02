//Swap using bitwise XOR
#include"stdio.h"
#include"conio.h"
int main(){
	int a=10,b=20;
	printf("a : %d b : %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After Swapping: \n");
	printf("a : %d b : %d ",a,b);
	
	getch();
	return 0;
}
