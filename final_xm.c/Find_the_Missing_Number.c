// #include <stdio.h>

// int main() 
// {
//     int T;
//     scanf("%d", &T);

//     for (int t = 0; t < T; t++) 
//     {
//         int M, A, B, C;
//         scanf("%d %d %d %d", &M, &A, &B, &C);

         
//         int misNum = M / (A * B * C);

//         if (M % (A * B * C) == 0 && misNum >= 0) 
//         {
//             printf("%d\n", misNum);
//         } 
//         else 
//         {
//             printf("-1\n");
//         }
//     }

//     return 0;
// }


#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) 
    {
        int M;  
        int A, B, C;
        scanf("%d %d %d %d", &M, &A, &B, &C);
        
        if (M % (A * B * C) == 0)
        {
            int D = M / (A * B * C);
            printf("%d\n", D);
        } 
        else 
        {
            printf("-1\n");
        }
    }
    
    return 0;
}
