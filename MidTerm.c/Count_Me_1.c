#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int cou2 = 0;
    int cou3 = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            cou2++;
        }
        if(A[i] % 3 == 0)
        {
            cou3++;
        }
    }

    printf(" %d %d", cou2,cou3);
     

    return 0;
}