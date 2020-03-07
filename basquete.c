#include <stdio.h>   

int main() {
    int cm, resultado;

    do {
        scanf("%d", &cm);
    } while (cm < 0 || cm > 2000);

    if (cm <= 800) {
        resultado = 1;
    } else if (cm <= 1400) {
        resultado = 2;
    } else {
        resultado = 3;
    }
    
    printf("%d\n", resultado);

    return 0;
}