#include <stdio.h>

int main() {
    int a, b, c, d, e, minimo, maximo, suma, i = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a < b) {
        if(a < c) {
            if (a < d) {
                if (a < e) {
                    minimo = a;
                    }
                }
            }
        }
    
    if (b < a) {
        if ( b < c) {
            if (b < d ) {
                if (b < e) {
                    minimo = b;
                }
            }
        }
    }

    if (c < a) {
        if (c < b) {
            if ( c < d) {
                if ( c < e) {
                    minimo = c;
                }
            }
        }
    }

    if (d < a) {
        if (d < b) {
            if ( d < c) {
                if ( d < e) {
                    minimo = d;
                }
            }
        }
    }

    if (e < a) {
        if (e < b) {
            if ( e < c) {
                if ( e < d) {
                    minimo = e;
                }
            }
        }
    }


    if(a > b) {
        if(a > c) {
            if (a > d) {
                if (a > e) {
                    maximo = a;
                    }
                }
            }
        }
    
    if (b > a) {
        if ( b > c) {
            if (b > d ) {
                if (b > e) {
                    maximo = b;
                }
            }
        }
    }

    if (c > a) {
        if (c > b) {
            if ( c > d) {
                if ( c > e) {
                    maximo = c;
                }
            }
        }
    }

    if (d > a) {
        if (d > b) {
            if ( d > c) {
                if ( d > e) {
                    maximo = d;
                }
            }
        }
    }

    if (e > a) {
        if (e > b) {
            if ( e > c) {
                if ( e > d) {
                    maximo = e;
                }
            }
        }
    }

    suma = a + b + c + d + e;

    printf("%d, %d, %d", maximo, minimo, suma);

    return 0;
}