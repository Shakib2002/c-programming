#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i;
    if (N > 0)
    {
        for (i = 1; i <= N; i++)  
        {
            printf("%d ", i); 
        }
    }
    else  
    {
        for (i = N; i <= 0; i++) 
        {
            printf("%d ", i); 
        }
    }

    printf("\n");

    return 0;
}