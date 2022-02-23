#include <stdio.h>
#include <math.h>

int main() {
    int num = 2, i, j;
    for (i = 2; i <= 300; i++) {
        // condicion para que sea primo f en realidad es un boleano
        int f = 0;
        
        //eliminamos todos los pares
        if ((num % 2) == 0) {
            f = 1; // bo0leano para si es par entonces falso
        } else { // ahora con todos los impares
            for (j = 3; j <= (sqrt(num)+1); j++) { // comprobacion matematica para que sea primo, hasta la raiz del numero + 1 
                if ((num % j) == 0) { // si su resto es igual a 0 para alguno de esos numeros entonces que sea primo es falso 
                    f = 1; // booleano falso 
                }
            }
        }
        
        if (f == 0) { //comprobacion de si es primo
            printf("%d\n", num);
        }
        
        num++;
    }

return 0;

}