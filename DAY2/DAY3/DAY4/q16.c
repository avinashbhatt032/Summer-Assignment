#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);
    for (int n = a; n <= b; n++) {
        int temp = n, digits = 0, sum = 0;
        while (temp != 0) { digits++; temp /= 10; }
        temp = n;
        while (temp != 0) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    return 0;
}
