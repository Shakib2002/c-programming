#include <stdio.h>

int main() {
    // Input: Size of the tree
    int N;
     scanf("%d", &N);

    // Printing the Christmas tree
    for (int i = 0; i < N; i++) {
        // Print spaces before the stars
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    // Printing the trunk of the tree
    int trunkHeight = 5; // Adjust the trunk height as needed
    for (int i = 0; i < trunkHeight; i++) {
        for (int j = 0; j < N; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
