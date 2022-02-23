#include <stdio.h>
#include <math.h>

int main() {
    int i;
    float pi, sumatorio, aux;

    for (i = 0; i <= 1000000; i++)
    {
        aux = ((pow(-1.0, i)) / ((2.0 * i) + 1.0));
        sumatorio += aux;
    }

    pi = 4.0 * sumatorio;

    printf("La aproximacion de pi es: %.5f\n", pi);

    return 0;
    
}