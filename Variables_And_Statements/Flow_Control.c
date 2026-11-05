#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i = 0;
    int j = 0;

    // IF - ELSE
    printf("IF - ELSE \n");

    printf("if j > i { Prints a face } else { Prints a different face } \n");

    printf("\nType the value that i will have for this comparison: ");
    scanf("%d", &i);

    printf("\nType the value that j will have for this comparison: ");
    scanf("%d", &j);

    if (j > i) {
        printf("\n('>o.o)'> \n");
    } else {
        printf("\\ (^_^) / \n");
    }

    // 

    
}