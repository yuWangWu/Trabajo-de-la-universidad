#include <stdio.h>

int main() {
    float v1, v2;
    char op;
    scanf("%f %c %f", &v1, &op, &v2);
    switch (op)
    {
    case '+':
        printf("%.2f\n", v1 + v2);
        break;
    case '-':
        printf("%.2f\n", v1 - v2);
        break;
    default:
        printf("No puedo hacer esa operacion.\n");
        break;
    }
    return 0;
}