#include <stdio.h>
#include <math.h>
int main() {
    int n, prime = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n <= 1) prime = 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) { prime = 0; break; }
    printf("%s\n", prime ? "Prime" : "Not Prime");
    return 0;
}
