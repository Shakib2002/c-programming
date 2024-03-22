#include <stdio.h>

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

     long long maxKatryoshkas = 0;
    
     long long katryoshkasEyesBody = n / 2;
    if (katryoshkasEyesBody < m / 2 || katryoshkasEyesBody < k) {
        maxKatryoshkas = katryoshkasEyesBody;
    } else {
        maxKatryoshkas = m / 2;
        if (maxKatryoshkas > k) {
            maxKatryoshkas = k;
        }
    }
    
    printf("%lld\n", maxKatryoshkas);
    
    return 0;
}