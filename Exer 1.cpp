#include<stdio.h>

int n1=0, n2=0, n3=0, n4=0;
float t=0;

int main(){
	
	printf("Informe a primeira nota: ");
	scanf("%i", &n1);
	printf("Informe a segunda nota: ");
	scanf("%i", &n2);
	printf("Informe a terceira nota: ");
	scanf("%i", &n3);
	printf("Informe a quarta nota: ");
	scanf("%i", &n4);
	t=(n1+n2+n3+n4)/4;
	printf("A media do aluno e: %.2f", t);
	
	if(t>=6){
		printf("\nAPROVADO");
	}
	else{
		printf("\nREPROVADO");
	}
	
		
}
