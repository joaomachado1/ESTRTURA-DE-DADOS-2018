#include <stdio.h>
#include <stdlib.h>

int main (){
	
int vet[2][3];

for (int x=0; x<=1; x++){
	for (int y=0; y<=2; y++){
    	scanf("%d", &vet[x][y]);
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


}
