#include <stdio.h>
int main ()
{
int num;
int cont=0;

while ((num!=4567) && (cont<3))
{
printf("introduce contraseña:");
scanf("%d", &num);
			
if (num>4567){
    printf("el numero es mayor\n");
	cont++;
	}
else{
    if (num<4567){
     printf("el numero es menor\n");
		cont++;
		}
     else{
       printf("contraseña correcta\n");
		cont++;
          }  
	}
if(cont==3){
			printf("error\n");
				return 0;
		}

}
return 0;

}


