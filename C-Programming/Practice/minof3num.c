//Minimum of three numbers
#include"stdio.h"
#include"conio.h"
int main(){
	int a,b,c,min;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b && a<=c){
		min=a;
	}else if(b<=a && b<=c){
		min=b;
	}else{
		min=c;
	}
	printf("Min : %d",min);
	
	getch();
}
