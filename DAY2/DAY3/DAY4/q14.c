#include <stdio.h>
int main() {
    int n, a = 0, b = 1, t;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        t = a + b; a = b; b = t;
    }
    printf("Nth Fibonacci: %d\n", a);
    return 0;
}
