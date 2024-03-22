 #include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int possible = 0;  // Flag to indicate if a solution is found

    // Try all possible combinations of operators
    long long result1 = a + b + c;
    long long result2 = a + b - c;
    long long result3 = a - b + c;
    long long result4 = a - b - c;
    long long result5 = a * b * c;
    long long result6 = a * b / c;
    long long result7 = a / b * c;
    long long result8 = a / b / c;

    // Check if any of the results match d
    if (result1 == d || result2 == d || result3 == d || result4 == d ||
        result5 == d || result6 == d || result7 == d || result8 == d) {
        possible = 1;
    }

    // Output the result
    if (possible) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}