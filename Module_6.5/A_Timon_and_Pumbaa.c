#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long result = a - b;
    if (result >= 0) {
        printf("%lld\n", result);
    } else {
        printf("0\n");
    }

    return 0;
}