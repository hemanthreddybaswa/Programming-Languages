//Special operators
#include"stdio.h"
#include<conio.h>
int main(){
	//Comma operator
	//int x,y,z;   //comma is separator
	//int k=1,l=3; // separator
	
	//int a=4,5; //Error a declaration comma is separator
	
	int a;
	a=4,5;
	printf("a : %d \n" ,a);  //right operand has no effect
	
	int c=(7,8,9);
	printf("c : %d \n",c);
	
	
	
	printf("int size : %u ",sizeof(int));
	
	getch();
	
	
}
