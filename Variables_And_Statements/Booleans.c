#include <stdio.h>
#include <stdbool.h>  // not needed in C23

int main(void) {
    bool x = false;

    if (x) {
        printf("x is true!\n");
    } else {
        printf("x is false!\n");
    }
}