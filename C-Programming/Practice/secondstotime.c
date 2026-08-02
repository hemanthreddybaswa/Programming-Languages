//Convert seconds into hours min and sec
#include"stdio.h"
#include"conio.h"
int main(){
	int sec,hr=0,min=0;
	printf("Enter seconds: ");
	scanf("%d",&sec);
	
	hr=sec/3600;
	sec=sec%3600;
	
	min=sec/60;
	sec=sec%60;
	
	printf("Time:  %d hrs %d min %d sec ",hr,min,sec);
	
	getch();
	return 0;
}
	
	
