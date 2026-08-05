//Calculator
#include"stdio.h"
#include"conio.h"
int main(){
	int a,b,res=0;
	char c;
	int valid=1;
	printf("Enter opertion: ");
	scanf("%d %c %d",&a,&c,&b);
	switch(c){
		case '+': res=a+b; break;
		case '-': res=a-b; break;
		case '*': res=a*b; break;
		case '/': res=a/b; break;
		case '%': res=a%b; break;
		default: printf("Invalid operation\n"); valid=0;
	}
	if(valid)
	printf("Result : %d",res);
	
	getch();
}
