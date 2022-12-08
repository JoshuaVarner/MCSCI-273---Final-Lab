//main.c
#include <stdio.h>

int f1(void);
int f2(void);
int f3(void);

int main(void) {
    int x1 = f1();
    int x2 = f2();
    int x3 = f3();
    printf("Function returned : %d\n", x1);
    printf("Function returned : %d\n", x2);
    printf("Function returned : %d\n", x3);
    return 0;
}
