//Area and Perimeter of circle
#include"stdio.h"
#include"conio.h"
int main(){
	float radius,perimeter,area;
	printf("Enter radius : ");
	scanf("%f",&radius);
	
	perimeter=2*3.14*radius;
	area=3.14*radius*radius;
	
	printf("Perimeter : %.2f\n",perimeter);
	printf("Area : %.2f\n",area);
	
	getch();
	return 0;
}
	
