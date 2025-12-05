#include <stdio.h>

int sub(int a, int b) { return a - b; } // Role C
int add(int a, int b) { return a + b; } // Role B

int main() {
    printf("=== C Language Calculator ===\n");
    printf("10 + 20 = %d\n", add(10, 20)); // Role B
    
    printf("50 - 30 = %d\n", sub(50, 30)); // Role C

    printf("System Check OK\n");
    return 0;
}
