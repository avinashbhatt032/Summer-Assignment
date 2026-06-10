#include <stdio.h>
int main() {
    int a, b, x, y, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while (b != 0) { t = b; b = a % b; a = t; }
    printf("LCM: %d\n", x / a * y);
    return 0;
}
