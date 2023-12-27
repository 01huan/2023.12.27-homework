#include <stdio.h>
#include <math.h>

int compute(int n) {
    if (n == 1) {
        return 0;
    }
    for (int i=2; i<=sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int n;
    scanf("%d", &n);
    if (compute(n)) {
        printf("-1");
    } else {
        for (int i=2; i<=n; i++) {
            while (n != i) {
                if (n % i == 0) {
                    printf("%d*", i);
                    n = n / i;
                } else {
                    break;
                }
            }
        }
        printf("%d", n);
    }
}