//Uppercase to Lowercase
#include"stdio.h"
#include"conio.h"
int main(){
	char ch,lo;
	printf("Enter character in uppercase : ");
	scanf("%c",&ch);
	lo=ch+('a'-'A');
	printf("Lowercase : %c",lo);
	getch();
	return 0;
}
	
