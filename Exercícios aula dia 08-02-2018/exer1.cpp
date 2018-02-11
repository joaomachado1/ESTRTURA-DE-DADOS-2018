#include <stdio.h>
#include <string.h>

int main(){

char p1[20] = "0";
char p2[06] = "teste";
fflush(stdin);

printf("Digite: ");
gets(p1);

//if (p1 == p2){
if (strcmp (p1, p2) == 0){
	printf("\nOK");
}
else{
	printf("\nKO");
}
return 0;
}
