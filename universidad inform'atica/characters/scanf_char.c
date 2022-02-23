#include <stdio.h>

int main() {
    char letra;
    char letra2;
    printf("Escriba dos letras con un enter entre medias letra:\n");
    scanf("%c %c", &letra, &letra2);
    printf("Has escrito la letra %c y %c\n", letra, letra2);

    return 0;
}

//si se pone scanf en dos lineas diferentes entonces se puede poner como espacio en vez de darle al enter.