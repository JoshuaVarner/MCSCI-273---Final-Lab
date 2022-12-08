//main.c
#include <stdio.h>

int f(void);

int main(void) {
    int x = f();
    printf("function’s return value: %d\n", x);
    return 0;
}
