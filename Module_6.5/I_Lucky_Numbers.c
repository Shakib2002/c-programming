#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tens_digit = N / 10;  
    int ones_digit = N % 10; 

    if (tens_digit == 0 || ones_digit == 0) {
        printf("NO\n");  

    } else if (N % tens_digit == 0 || N % ones_digit == 0) {
        printf("YES\n");  
         
    } else {
        printf("NO\n");  
    }

    return 0;
}