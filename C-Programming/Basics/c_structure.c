//this is hello world program
/* this is my first program
 * my name is hemanth
*/						//documentation section optional 

#include"stdio.h"		//link section
#include<conio.h>

#define max 100			//definition section optional

int a=10;   			//global var declaration section optional 
int sum();


int main(){				//main func section
	printf("Hello ");
	printf("%d %d %d ",a,max,sum());
	getch();
}
 
int sum(){ 		 	//sub program section

	int b=20;
	int c=a+b;
	return c;
}






