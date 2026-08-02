//Calculate Electricity bill
#include"stdio.h"
#include"conio.h"
int main(){
	float units,price;
	printf("enter units :");
	scanf("%f",&units);
	if(units<=100){
		price=units*0.5;
	}else if(units<=200){
		price=100*0.5+(units-100)*0.75;
	}else{
		price=100*0.5+100*0.75+(units-200)*1.2;
	}
	printf("Electicity bill : %.f",price);
	
	getch();
	return 0;
}
