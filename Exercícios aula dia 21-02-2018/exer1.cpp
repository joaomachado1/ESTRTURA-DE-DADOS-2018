#include <stdio.h>

int main() { 

int x, *p; 
p = &x; 
x = 10; 

printf("%d", *p);

}
