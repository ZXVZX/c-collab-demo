#include <stdio.h>
int sub(int a, int b) { return a - b; } // Role C
int main() {
    printf("=== C Language Calculator ===\n");
    printf("50 - 30 = %d\n", sub(50, 30)); // Role C
    printf("System Check OK\n");
    return 0;
}
