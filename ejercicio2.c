#include <stdio.h>
int division(int num1, int num2);
int main ()
{
int a, b, c;
printf("pon numerador:");
scanf(" %d", &a);
printf("pon divisor:");
scanf("%d", &b);
division(a,b);
c=division(a,b);
printf("%d\n", c);
return 0;
}

int division(int num1, int num2)
{
int cont=0;
do{
num1=num1-num2;
cont++;
}
while(num1>=num2);
return (cont);
}



