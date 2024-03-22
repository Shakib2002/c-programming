// #include <stdio.h>

// void odd_even(int arr[], int size)
//  {
//     int E_Count=0, O_Count=0;

//     for (int i = 0; i < size; i++) 
//     {
//         if (arr[i] % 2 == 0)
//          {
//             E_Count++;
//         } 
//         else 
//         {
//             O_Count++;
//         }
//     }
//     printf("%d %d", E_Count,O_Count);
// }

// int main()
//  {
//     int N;
//     scanf("%d", &N);

//     int A[N];
//     for (int i = 0; i < N; i++) 
//     {
//         scanf("%d", &A[i]);
//     }

//     odd_even(A, N);

//     return 0;
// }

// #include <stdio.h>

// int main() 
// {
//     int N;
//     scanf("%d", &N);

//     int A[N];
//     for (int i = 0; i < N; i++) 
//     {
//         scanf("%d", &A[i]);
//     }

//     int E_Count = 0, O_Count = 0;

//     for (int i = 0; i < N; i++) 
//     {
//         if (A[i] % 2 == 0) 
//         {
//             E_Count++; 
//         } 
//         else 
//         {
//             O_Count++; 
//         }
//     }

//     printf("%d %d", E_Count, O_Count);

//     return 0;
// }




// #include <stdio.h>

// void odd_even(int arr[], int size) 
// {
//     int E_Count = 0, O_Count = 0;

//     for (int i = 0; i < size; i++) 
//     {
//         if (arr[i] % 2 == 0) 
//         {
//             E_Count++;
//         } 
//         else 
//         {
//             O_Count++;
//         }
//     }
//     printf("%d %d", E_Count, O_Count);
// }

// int main() 
// {
//     int N;
//     scanf("%d", &N);

//     int A[N];
//     for (int i = 0; i < N; i++) 
//     {
//         scanf("%d", &A[i]);
//     }

//     odd_even(A, N);

//     return 0;
// }



#include <stdio.h>

void odd_even() 
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }

    int E_Count = 0, O_Count = 0;

    for (int i = 0; i < N; i++) 
    {
        if (A[i] % 2 == 0) 
        {
            E_Count++;
        } 
        else 
        {
            O_Count++;
        }
    }

    printf("%d %d", E_Count, O_Count);
}

int main() 
{
    odd_even();  
    return 0;
}
