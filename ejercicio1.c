#include <stdio.h>
int multiplica(int num1, int num2);
int main ()
{
int a, b, c;
printf("primer numero\n");
scanf("%d", &a);
printf("segundo numero\n");
scanf(" %d", &b);
multiplica(a,b);
c=multiplica(a,b);
printf("%d\n", c);
return 0;
}
int multiplica(int num1, int num2)
{
int i, resultado;
resultado=0;
for(i=0;i<num2;i++){
resultado=resultado+num1;
}
return (resultado);
}
