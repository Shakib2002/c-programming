 #include <stdio.h>

int main() {
    int n, r, c;
    scanf("%d", &n);

    for (r = 1; r <= n; r++) 
    {
     
        for (int s = 1; s<= n-r; s++) 
        {
            printf(" ");
        }
 
        for (c = r; c >= 1; c--) 
        {
            printf("%d", c);
        }

        printf("\n");
    }

    return 0;
}
