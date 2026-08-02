//Convert lower case to upper case
#include"stdio.h"
#include"conio.h"
int main(){
	char ch,up;
	printf("Enter lowercase letter:");
	scanf("%c",&ch);
	up=ch-('a'-'A');
	printf("Uppercase : %c",up);
	getch();
	return 0;
}
	
