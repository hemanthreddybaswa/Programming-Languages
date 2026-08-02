//This program helps to understand basic structure of c program         //Single line comments
/*This is c programming.
 * C programming invented by Dennis Richie
 * At Bell labs in 1972													//Multi line comments
 */

#include<stdio.h>
#include<conio.h>				//Link Section

#define score 20 
#define square(x) x*x			//definition section

int x=15;						//Global declaration section

void greet();
int main(){						//Main section
	int a=10;
	printf("C basic structure:\n");
	greet();
	
	printf("%d %d ",x,score);
	printf("%d ",square(a));
	
	
	getch();
	return 0;
}
void greet(){
	printf("Hello user!\n");
}



