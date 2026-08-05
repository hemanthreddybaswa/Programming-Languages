//Various forms of for
#include"stdio.h"
#include"conio.h"
int main(){
	int i=1;
	for(;i<=15;i++){
		printf("%d ",i);
	}
	printf("\n");
	
	int j;
	for(j=1;j<16;){
		printf("%d ",j);
		j++;
	}
	
	printf("\n");
	
	int k;
	for(k=1;;k++){
		if(k>15)
		break;
		printf("%d ",k);
	}
	printf("\n");
	
	int l=1;
	for(;;){
		if(l>15){
			break;
		}
		printf("%d ",l);
		l++;
	}
	
	printf("\n");
	
	
	//infinite for loop
	//for(;;){}
	
	for(i=1,j=0;i<5,j<=6;j++);
	printf("%d %d ",i,j);
	
	getch();
	
}
