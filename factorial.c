#include <stdio.h>

long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main(void) {
    printf("%ld\n", factorial(0));   // 1
    printf("%ld\n", factorial(1));   // 1
    printf("%ld\n", factorial(5));   // 120
    printf("%ld\n", factorial(-1));  // -1
    return 0;
}
