#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
int n;
//Genera semilla aleatoria
srand(time(NULL));
//Numero aleatorio entre 1 y 100
n = rand() % 100 + 1;

int input;
while (input != n)
{
    printf("Introduzca el numero: \n");
    scanf("%d", &input);

    if (input < n)
    {
        printf("El numero introducido es menor \n");
    } 

    if (input > n) 
    {
        printf("El numero introducido es mayor \n");
    }

    if (input == n)
    {
        printf("Ha acertado el numero!\n");
    }
    
}

return 0;

}
