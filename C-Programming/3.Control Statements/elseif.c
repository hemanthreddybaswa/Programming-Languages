//Using if-elseif-else
#include"stdio.h"
#include"conio.h"
int main(){
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	if(num==0){
		printf("Zero");
	}
	else if(num>0){
		printf("Positive number");
	}
	else{
		printf("Negative number");
	}
	
	getch();
}
