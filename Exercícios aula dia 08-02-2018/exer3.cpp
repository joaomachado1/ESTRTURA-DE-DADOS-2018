#include <stdio.h>
#include <stdlib.h>

int main (){

char p;	
int vet[2][3];
int a=1;
for (int x=0; x<=1; x++){
	for (int y=0; y<=2; y++){
		vet[x][y]=a;
		if (a<5){
		a=a+1;
		}
		if (a>=4){
			if(a>=10){
				a=a+10;
			}
			else{
			a=10;
			}
		}
	}		
}
system("cls");
printf("\n");
for (int x=0; x<=1; x++){
			printf(" |");
	for (int y=0; y<=2; y++){
    	printf("%2d|", vet[x][y]);
	}
	printf("\n");
}
printf("\n");
system("pause");

}
