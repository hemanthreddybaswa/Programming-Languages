//Compound Interest
#include"stdio.h"
#include"conio.h"
#include"math.h"
int main(){
	float p,t,r,ci;
	printf("Enter principle time and rate :");
	scanf("%f%f%f",&p,&t,&r);
	ci=p*(pow((1+(r/100)),t))-p;
	printf("Compound Interest : %.2f",ci);
	
	getch();
	return 0;
}
