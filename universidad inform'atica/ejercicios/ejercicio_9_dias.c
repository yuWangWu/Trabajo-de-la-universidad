#include <stdio.h>

int main() {
    int year;
    printf("introduzca el numero de año: \n");
    scanf("%d", &year);

    if((year % 100) == 0) {
        if((year % 400) == 0) {
            printf("%d tiene 29 dias en el mes de febrero", year);
        } else {
            printf("%d tiene 28 dias en el mes de febrero", year);
        }
    } else {
        if((year % 4) == 0) {
            printf("%d tiene 29 dias en el mes de febrero", year);
        } else {
            printf("%d tiene 28 dias en el mes de febrero", year);
        }
    }
    
    return 0;
}