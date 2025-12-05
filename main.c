#include <stdio.h>
int add(int a, int b) { return a + b; } // Role B
int main() {
    printf("=== C Language Calculator ===\n");
    printf("10 + 20 = %d\n", add(10, 20)); // Role B
    printf("System Check OK\n");
    return 0;
}
