#include <stdio.h>

int main() {
    int i;

    i = 5;
    while (i > 0);
    {
        printf("%d...", i);
        --i;
    }
    printf("despegue!");

    return 0;
    
}