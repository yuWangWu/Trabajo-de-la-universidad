#include <stdio.h>

int main() {
    double num = 103.56e10;
    printf("Esto es un numero real %f\n", num);
    printf("... en notacion cientifica %e\n", num);
    printf("... y de forma automatica %g\n", num);

    return 0;
}