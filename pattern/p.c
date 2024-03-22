#include <stdio.h>

int main() {
    int n, row, col;
    scanf("%d", &n);

    for (row = 1; row <= n; row++) 
    {
     
        for (int space = 1; space <= n - row; space++) 
        {
            printf("  ");
        }
 
        for (col = row; col >= 1; col--) 
        {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}
