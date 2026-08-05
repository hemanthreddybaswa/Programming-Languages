//check for positive or negative and even number  or odd number using nested if
#include"stdio.h"
#include"conio.h"
int main(){
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	if(num>0){
		if(num%2==0){
			printf("Positive even number");
		}else{
			printf("Positive odd number");
		}
	}
	else{
		if(num%2==0){
			printf("Negative even number");
		}else{
			printf("Negative odd number");
		}
	}
	
	getch();

}
	
