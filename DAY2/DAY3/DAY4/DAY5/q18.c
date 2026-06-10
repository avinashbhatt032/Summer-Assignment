#include <stdio.h>
int main() {
    int n, temp, sum = 0, digit, fact;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    printf("%s\n", sum == n ? "Strong Number" : "Not Strong");
    return 0;
}
