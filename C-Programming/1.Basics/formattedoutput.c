//Formatted output
#include"stdio.h"
#include"conio.h"
int main(){
	printf("Formatted output:\n");
	printf("%d\n"); //garbage value
	int a=10;
	printf("Hello world\n");
	printf("%d\n",a);
	printf("Sum is %d\n",a);		
	printf("%.2f\n",10.34);
	printf("%8d\n",1234);      	// ----1234
	printf("%-8d\n",1234);    	//1234----
	printf("%08d\n",1234);   	//00001234
	printf("%8.2f\n",12.345); 	//--123.34
	printf("%+8d\n", 234567);   //-+234567

	getch();
	
	
	
}
