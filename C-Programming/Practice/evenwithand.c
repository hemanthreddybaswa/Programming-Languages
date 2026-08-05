//Even number using bitwise
#include"stdio.h"
#include"conio.h"
int main(){
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if(num & 1)
		printf("Odd number");
	else
	printf("Even Number");
	
	getch();
}
