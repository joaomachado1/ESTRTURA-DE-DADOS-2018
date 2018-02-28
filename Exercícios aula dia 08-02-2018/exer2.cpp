#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"ptb");

char p1[11] = "0";
int tam = 0, x=0;

printf("Informe uma palavra de até 10 letras:\n");
gets(p1);
tam = strlen(p1);

for (x=tam-1; x>=0; x-- ){
	printf("%c", p1[x]);
}

}
