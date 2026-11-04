#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i = 0;
    int j = 0;

    // IF - ELSE
    printf("IF - ELSE \n");

    printf("if j > i { Imprime una cara } else { Imprime una cara diferente } \n");

    printf("\nIntroduce el valor que tendrá i para esta comparación: ");
    scanf("%d", &i);

    printf("\nIntroduce el valor que tendrá j para esta comparación: ");
    scanf("%d", &j);

    if (j > i) {
        printf("\n('>o.o)'> \n");
    } else {
        printf("\\ (^_^) / \n");
    }

    
}