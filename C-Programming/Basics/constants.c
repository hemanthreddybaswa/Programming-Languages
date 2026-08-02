//Constants
#include"stdio.h"
#include<conio.h>
int main(){
//Integer Constant
	//Decimal constant
	int x=222;
	int y=22u;
	int z=22l;
	int a=22ul;
	printf("%d %d %d %d \n",x,y,z,a);
	
	//Octal constant
	int p=010;
	int q=0123;
	printf("%d %d %o %o\n",p,q,18,24);
	
	//Hexadecimal constant
	int h=0xa;
	int i=0XC;
	int j=0Xb;
	printf("%d %d %d %x %X\n",h,i,j,12,15);
	
//floating Constant
	
	float f=10.234f;
	double d=10.234l;
	float e=102341e-4;
	printf("%f %lf %f \n",f,d,e);
	
//Character constant
	
	char ch='a';
	char ch1='%';
	printf("%c %c \n",ch,ch1);
	printf("10 %% \n");
	
//String Constant
	char st[6]="Hello\0";
	printf("%s\n",st);
	

	
}
