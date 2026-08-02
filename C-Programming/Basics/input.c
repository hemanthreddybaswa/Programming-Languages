//Taking input
#include"stdio.h"
#include"conio.h"
int main(){
	int a;
	printf("Enter num:");
	scanf("%d",&a);
	printf("Output: %d \n\n",a);
		
	float f;
	printf("Enter float:");
	scanf("%f",&f);
	printf("%f\n\n",f);
	
	
	char ch;
	printf("Enter single char:");
	scanf("  %c",&ch);
	printf("%c\n\n",ch);
	
	char s[25];
	printf("Enter string:");
	scanf("%s",s);
	printf("%s\n\n",s);
	
	
	char name[20];
	printf("Enter name with spaces:");
	scanf(" %[^\n]",name);
	printf("%s\n\n",name);
	
	
	
	int b,c;
	printf("Enter 2 and 3 digit number:");
	scanf("%2d%3d",&b,&c);
	printf("%d %d \n\n",b,c);

	
	int d,m,y;
	printf("Enter date in dd-mm-yyyy:");
	scanf("%d-%d-%d",&d,&m,&y);
	printf("%d %d %d ",d,m,y);
	
	
	
	
	
	
	
	getch();
	return 0;
}
