#include <stdio.h>
#include <stdlib.h>
int factorial (int num1);
int main ()
{
int num, c;
printf("pon numero");
scanf("%d", &num);
c=factorial(num);
printf("%d\n",c); 
return 0;
}

int factorial(int num1)
{
int resultado=1;
int cont=1;
while(cont<=num1){
resultado=resultado*cont;
cont++;
}
return resultado;
}




