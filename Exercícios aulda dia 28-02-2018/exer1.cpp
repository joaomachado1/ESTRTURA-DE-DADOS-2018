#include<stdio.h>
#include<stdlib.h>

int main(){
	int N=0;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &N);
	int *n;
	n = (int *) malloc(N*sizeof(int));
	
	for (int i=0; i<N; i++){
		printf ("Informe o valor: \n");
		scanf("%i\n", (n+i));
	}
	
	free(n);
	
}
