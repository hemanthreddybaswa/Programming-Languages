//Maximun of two num
#include"stdio.h"
#include"conio.h"
int main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>=b){
		printf("max : %d ",a);
	}else{
		printf("max : %d ",b);
	}
	getch();
}
