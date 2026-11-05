#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i = 5;
    int j = 15;
    int anterior = 0;

    // Arithmetic operators
    printf("Arithmetic operators \n");
    printf("The initial value of i is %d and the initial value of j is %d \n\n", i, j);

    anterior = i;
    i += 3;
    printf("Sum i + 3: %d + 3 = %d\n", anterior, i);

    anterior = i;
    i -= 3;
    printf("Substraction i - 3: %d - 3 = %d\n", anterior, i);

    anterior = i;
    i *= 10;
    printf("Multiplicación i * 10: %d * 10 = %d\n", anterior, i);

    anterior = i;
    i /= 2;
    printf("Division i / 2: %d / 2 = %d\n", anterior, i);

    anterior = i;
    i %= 10;
    printf("Modulo i % 10: %d %% 10 = %d\n", anterior, i);

    printf("\nThe value of i at the end is: %d \n", i);
    
    // Ternary operators
    printf("\nTernary operators \n");
    printf("The number %d is: %s \n", j, j % 2 == 0? "Even": "Odd");

    // PreIncrement (Decrement) And PostIncrement (Decrement) operators
    printf("\nPreIncrement (Decrement) And PostIncrement (Decrement) operators \n");

    // PostIncrement
    printf("PostIncrement \n");
    i = 10;
    printf("The initial value of i is %d and the value of j is going to be equal to 5 + i++ \n", i, j);
    j = 5 + i++;  // Compute 5 + i, _then_ increment i
    printf("%d, %d\n\n", i, j);  // Prints 11, 15

    // PreIncrement
    printf("PreIncrement \n");
    i = 10;
    printf("The initial value of i is %d and the value of j is going to be equal to 5 + ++i \n", i, j);
    j = 5 + ++i;  // Increment i, _then_ compute 5 + i
    printf("%d, %d\n", i, j);  // Prints 11, 16

    // Conditional Operators
    printf("\nConditional operators \n");
    i = 5;
    j = 10;
    printf("The initial value of i is %d and the initial value of j is %d \n\n", i, j);
    
    if (j > i) {
        printf("j is greater than i \n");
    }

    if (i < j) { 
        printf("i is less than j \n");
    }

    if (i != j) {
        printf("i is different than j \n");
    }

    j = 5;
    printf("\nThe value of j changes to %d \n", j);

    if (i == j) {
        printf("i is equal to j \n");
    }

    if (i >= j) {
        printf("i is greater than or equal to j \n");
    }

    if (j <= i) {
        printf("j is less than or equal to i \n");
    }

    // Boolean operators
    printf("\nBoolean operators \n");

    i = 10;
    j = 20;
    printf("The initial value of i is %d and the initial value of j is %d \n\n", i, j);

    printf("&& Operator \n");
    printf("if i < 15 && j > 15 -> Prints SOMETHING -> \n");

    if (i < 15 && j > 15) {
        printf("SOMETHING \n");
    }

    printf("\n|| Operator \n");
    printf("if i > 15 || j > 15 -> Prints A THING -> \n");

    if (i > 15 || j > 15) {
        printf("A THING \n");
    }

    printf("\n! Operator \n");
    printf("if !(i >= 15) -> Prints A FACE -> \n");

    if (!(i >= 15)) {
        printf("( ͡ಠ ͜ʖ ͡ಠ)\n");
    }

    // sizeof Operator
    printf("\nsizeof operator \n");
    i = 5;
    float k = 5.50;
    char l = 'P';
    bool x = true;

    printf("We have the following variables: i = %d, k = %f, l = %c, x = %d ( True ) \n", i, k, l, x);
    printf("Each one occupies the next amount of bytes in memory: \n\n");
    
    printf("i = %zu \n", sizeof(i));
    printf("k = %zu \n", sizeof(k));
    printf("l = %zu \n", sizeof(l));
    printf("x = %zu \n\n", sizeof(x));

    printf("In my system a type float variable reserves the same amount of bytes as a int variable by default");

}