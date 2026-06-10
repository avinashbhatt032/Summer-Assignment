#include <stdio.h>
#include <math.h>
int main() {
    int n, orig, digits = 0, sum = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    orig = n; temp = n;
    while (temp != 0) { digits++; temp /= 10; }
    temp = n;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    printf("%s\n", sum == orig ? "Armstrong" : "Not Armstrong");
    return 0;
}
