#include <stdio.h>
#include <locale.h>

int main() { 
setlocale(LC_ALL,"ptb");

int x, *p; 
p = &x; 
x = 10; 

printf("Conte�do da variav�l X: %d\n", x);
printf("Conte�do da variav�l apontada pelo ponteiro: %d\n\n", *p);

printf("Endere�o da variav�l X: %p\n", x);
printf("Endere�o da variav�l p: %p\n", p);

}
