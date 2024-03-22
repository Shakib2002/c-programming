// #include <stdio.h>

// int main() 
// {
//     int T;
//     scanf("%d", &T);

//     while (T--) 
//     {
//         int N;
//         scanf("%d", &N);

//         char result[N + 1];
//         scanf("%s", result);

//         int tigerWins = 0;
//         int pathanWins = 0;

//         for (int i = 0; i < N; i++) 
//         {
//             if (result[i] == 'T') 
//             {
//                 tigerWins++;
//             } else if (result[i] == 'P') 
//             {
//                 pathanWins++;
//             }
//         }

//         if (tigerWins > pathanWins) 
        
//         {
//             printf("Tiger\n");
//         } 
//         else if (tigerWins < pathanWins) 
//         {
//             printf("Pathaan\n");
//         } 
//         else 
//         {
//             printf("Draw\n");
//         }
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() 
{
    int T;  
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) 
    {
        int N;  
        scanf("%d", &N);
        
        char S[N];
        scanf("%s", S);
        
        int tws = 0;
        int pws = 0;
        for (int i = 0; i < N; i++) 
        {
            if (S[i] == 'T') 
            
            {
                tws++;
            } 
            else if (S[i] == 'P') 
            {
                pws++;
            }
        }
        
        if (tws > pws) 
        {
            printf("Tiger\n");
        } 
        
        else if (tws < pws) 
        {
            printf("Pathaan\n");
        } 
        else 
        {
            printf("Draw\n");
        }
    }
    
    return 0;
}
