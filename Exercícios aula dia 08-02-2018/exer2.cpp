#include <stdio.h>
#include <string.h>

int main (){

char p1[10] = "0";
int tam = 0, x=0;

printf("Informe uma palavra >= 10 letras:\n");
gets(p1);
tam = strlen(p1);

for (x=tam; x>=0; x-- ){
	printf("%c", p1[x]);
}

}
