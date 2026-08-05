//Minimum of two numbers
#include"stdio.h"
#include"conio.h"
int main(){
	int a,b;
	printf("Enter two num:");
	scanf("%d%d",&a,&b);
	if(a<b){
		printf("Min : %d ",a);
	}else{
		printf("Min : %d ",b);
	}
	
	getch();
}
