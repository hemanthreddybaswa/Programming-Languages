//Average of three numbers
#include"stdio.h"
#include"conio.h"
int main(){
	float a,b,c,avg;
	printf("Enter three numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average : %f ",avg);
	
	getch();
	return 0;
	
}
