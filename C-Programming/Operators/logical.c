//Logical Operators
#include"stdio.h"
#include"conio.h"
int main(){
	printf("10<15 && 15<20 : %d \n",10<15 && 15<20);
	printf("10<15 && 15>20 : %d \n",10<15 && 15>20);
	
	printf("10<15 || 15>20 : %d \n",10<15 || 15>20);
	printf("10>15 || 15<20 : %d \n",10>15 || 15<20);
	
	printf("!15<20 : %d \n",!(15<20));
	printf("!10<15 : %d \n",!(10>15));
	
	getch();
	
	
}
