//Area and Perimeter  of rectangle
#include"stdio.h"
#include"conio.h"
int main(){
	float length,breadth;
	float perimeter,area;
	
	printf("Enter length and breadth : ");
	scanf("%f %f",&length,&breadth);
	
	perimeter=2*(length+breadth);
	area=length*breadth;
	printf("Perimeter : %.2f \n",perimeter);
	printf("Area : %.2f \n",area);
	
	getch();
	return 0;
}
