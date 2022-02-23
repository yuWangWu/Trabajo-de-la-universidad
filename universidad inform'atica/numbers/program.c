#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Un int ocupa %d bytes ", sizeof(int));
    printf("y abarca desde %d hasta %d.\n", INT_MIN, INT_MAX);
    printf("Un long int ocupa %d bytes ", sizeof(long int));
    printf("y abarca desde %ld hasta %ld.\n", LONG_MIN, LONG_MAX);
    printf("Un long long int ocupa %d bytes ", sizeof(long long int));
    printf("y abarca desde %lld hasta %lld.\n", LLONG_MIN, LLONG_MAX);

    return 0;
}