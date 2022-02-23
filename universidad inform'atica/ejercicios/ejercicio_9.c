#include <stdio.h>

int main() {
    int year;
    printf("introduzca el numero de año: \n");
    scanf("%d", &year);

    if((year % 100) == 0) {
        if((year % 400) == 0) {
            printf("%d es bisiesto", year);
        } else {
            printf("%d no es bisiesto", year);
        }
    } else {
        if((year % 4) == 0) {
            printf("%d es bisiesto", year);
        } else {
            printf("%d no es bisiesto", year);
        }
    }
    
    return 0;
}