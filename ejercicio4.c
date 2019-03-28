#include <stdio.h>
int factorial(int num1);
int main ()
{
int num, c;
printf("introduce numero para hacer factorial: ");
scanf("%d", &num);
factorial(num);
c=factorial(num);
printf("%d\n", c);
return 0;
}

int factorial(int num1)
{
int i, result;
result=1;
for(i=1;i<=num1;i++){
result=result*i;
}
return (result);
}
