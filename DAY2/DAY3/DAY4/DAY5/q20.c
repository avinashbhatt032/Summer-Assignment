#include <stdio.h>
int main() {
    int n, largest = -1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    printf("Largest prime factor: %d\n", largest);
    return 0;
}
