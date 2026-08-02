//Temperature Conversion
// (F-32)/180   =   (C/100)   =   (K-273)/100

#include"stdio.h"
#include"conio.h"
int main(){
	float f,c;
	printf("Enter temperature in celsius: ");
	scanf("%f",&c);
	f=c*1.8+32;
	printf("Temperature in Fahrenheit : %.2f",f);
	
	getch();
	return 0;
	
}
	
