#include <stdio.h>
#include <locale.h>

int main() { 
setlocale(LC_ALL,"ptb");

int x, *p; 
p = &x; 
x = 10; 

printf("Conteúdo da variavél X: %d\n", x);
printf("Conteúdo da variavél apontada pelo ponteiro: %d\n\n", *p);

printf("Endereço da variavél X: %p\n", x);
printf("Endereço da variavél p: %p\n", p);

}
