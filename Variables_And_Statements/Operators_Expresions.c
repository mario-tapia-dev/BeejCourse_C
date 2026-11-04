#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i = 5;
    int j = 15;
    int anterior = 0;

    // Arithmetic operators
    printf("Arithmetic operators \n");
    printf("El valor inicial de i es %d y el valor inicial de j es %d \n\n", i, j);

    anterior = i;
    i += 3;
    printf("Suma i + 3: %d + 3 = %d\n", anterior, i);

    anterior = i;
    i -= 3;
    printf("Resta i - 3: %d - 3 = %d\n", anterior, i);

    anterior = i;
    i *= 10;
    printf("Multiplicación i * 10: %d * 10 = %d\n", anterior, i);

    anterior = i;
    i /= 2;
    printf("División i / 2: %d / 2 = %d\n", anterior, i);

    anterior = i;
    i %= 10;
    printf("Módulo i % 10: %d %% 10 = %d\n", anterior, i);

    printf("\nEl valor de i al final es: %d \n", i);
    
    // Ternary operators
    printf("\nTernary operators \n");
    printf("El número %d es: %s \n", j, j % 2 == 0? "Par": "Impar");

    // PreIncrement (Decrement) And PostIncrement (Decrement) operators
    printf("\nPreIncrement (Decrement) And PostIncrement (Decrement) operators \n");

    // PostIncrement
    printf("PostIncrement \n");
    i = 10;
    printf("El valor inicial de i es %d y el valor de j va a ser igual a 5 + i++ \n", i, j);
    j = 5 + i++;  // Compute 5 + i, _then_ increment i
    printf("%d, %d\n\n", i, j);  // Prints 11, 15

    // PreIncrement
    printf("PreIncrement \n");
    i = 10;
    printf("El valor inicial de i es %d y el valor de j va a ser igual a 5 + ++i \n", i, j);
    j = 5 + ++i;  // Increment i, _then_ compute 5 + i
    printf("%d, %d\n", i, j);  // Prints 11, 16

    // Conditional Operators
    printf("\nConditional operators \n");
    i = 5;
    j = 10;
    printf("El valor inicial de i es %d y el valor inicial de j es %d \n\n", i, j);
    
    if (j > i) {
        printf("j es mayor que i \n");
    }

    if (i < j) { 
        printf("i es menor que j \n");
    }

    if (i != j) {
        printf("i es diferente que j \n");
    }

    j = 5;
    printf("\nEl valor de j cambia a %d \n", j);

    if (i == j) {
        printf("i es igual que j \n");
    }

    if (i >= j) {
        printf("i es mayor o igual que j \n");
    }

    if (j <= i) {
        printf("j es menor i igual que i \n");
    }

    // Boolean operators
    printf("\nBoolean operators \n");

    i = 10;
    j = 20;
    printf("El valor inicial de i es %d y el valor inicial de j es %d \n\n", i, j);

    printf("&& Operator \n");
    printf("if i < 15 && j > 15 -> Imprime ALGO -> \n");

    if (i < 15 && j > 15) {
        printf("ALGO \n");
    }

    printf("\n|| Operator \n");
    printf("if i > 15 || j > 15 -> Imprime UNA COSA -> \n");

    if (i > 15 || j > 15) {
        printf("UNA COSA \n");
    }

    printf("\n! Operator \n");
    printf("if !(i >= 15) -> Imprime UNA CARA -> \n");

    if (!(i >= 15)) {
        printf("( ͡ಠ ͜ʖ ͡ಠ)\n");
    }

    // sizeof Operator
    printf("\nsizeof operator \n");
    i = 5;
    float k = 5.50;
    char l = 'P';
    bool x = true;

    printf("Tenemos las siguientes variables: i = %d, k = %f, l = %c, x = %d ( True ) \n", i, k, l, x);
    printf("Cada una ocupa la siguiente cantidad de memoria en bytes: \n\n");
    
    printf("i = %zu \n", sizeof(i));
    printf("k = %zu \n", sizeof(k));
    printf("l = %zu \n", sizeof(l));
    printf("x = %zu \n\n", sizeof(x));

    printf("En mi sistema una variable de tipo float guarda la misma cantidad de bytes que una de tipo int por defecto");

}