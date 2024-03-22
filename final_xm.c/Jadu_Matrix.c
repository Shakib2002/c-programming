#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    if (N != M) 
    {
        printf("NO\n");
        return 0;
    }

    int matrix[N][N];
    
     
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

 
    int JaduMat = 1;
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (i == j || i + j == N - 1) 
            {
                if (matrix[i][j] != 1) 
                {
                    JaduMat = 0;
                    break;
                }
            } 
            else 
            {
                if (matrix[i][j] != 0) 
                {
                    JaduMat = 0;
                    break;
                }
            }
        }
        if (JaduMat == 0) 
        {
            break;
        }
    }

    if (JaduMat) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
