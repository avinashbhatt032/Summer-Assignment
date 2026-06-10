#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        if (n % i == 0) sum += i;
    printf("%s\n", sum == n ? "Perfect Number" : "Not Perfect");
    return 0;
}
