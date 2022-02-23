#include <stdio.h>
#include <float.h>

int main() {

    printf("Un float ocupa %d bytes ", sizeof(float));
    printf("y abarca desde %e hasta %e. \n", FLT_MIN, FLT_MAX);

    printf("UN double ocupa %d bytes ", sizeof(double));
    printf("y abarca desde %e hasta %e. \n", DBL_MIN, DBL_MAX);

    return 0;
}