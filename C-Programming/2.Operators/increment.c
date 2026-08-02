//Increment operators
#include<stdio.h> 
#include<conio.h> 
int main(){
	int i=10,j=5;
	printf("i: %d  j: %d \n",i,j);
	printf("++i: %d  ++j:%d \n",++i,++j);
	printf("i: %d  j: %d \n",i,j);
	printf("i++: %d  j++:%d \n",i++,j++);
	printf("i: %d  j: %d \n",i,j);

	j = i++ + ++i;   //Undefined behaviour
	printf("i: %d  j:%d \n",i,j);
	
	getch();
	

    
} 
