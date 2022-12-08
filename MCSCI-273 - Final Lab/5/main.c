#include <stdio.h>

char f1(void);
char f2(void);
char f3(void);

int main(void) {
    char c1 = f1();
    char c2 = f2();
    char c3 = f3();
    printf("Function returned : %c\n", c1);
    printf("Function returned : %c\n", c2);
    printf("Function returned : %c\n", c3);
    return 0;
}