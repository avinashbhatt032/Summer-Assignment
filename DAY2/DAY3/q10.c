#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);
    for (int n = a; n <= b; n++) {
        int prime = (n > 1);
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0) { prime = 0; break; }
        if (prime) printf("%d ", n);
    }
    return 0;
}
