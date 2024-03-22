// #include<stdio.h>
//  int main()
//  {
//      int n,s,k;
//      scanf("%d",&n);
// //step-
//      s=n-1;
//      k=1;
// //step-ekta line
//      for(int i=1; i<=(2*n)-1; i++)
//      {
//         for(int j=1; j<=s; j++)
//         {
//             printf(" ");
//         }
//         for(int j=1; j<=k; j++)
//         {
//             printf("#");
//         }
// //line ses-step3
//          if(i<=n-1)
//          {
//             s--;
//             k=k+2;
//          }
//          else
//          {
//             s++;
//             k=k-2;
//          }
//          printf("\n");
//      }
//   return 0;
//  }



 
//  #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++) 
//     {
//         // Print leading spaces
//         for (int j = 1; j <= N - i; j++) 
//         {
//             printf(" ");
//         }

//         // Print numbers in ascending order
//         for (int j = 1; j <= i; j++) {
//             printf("%d", j);
//         }

//         // Print numbers in descending order
//         for (int j = i - 1; j >= 1; j--) {
//             printf("%d", j);
//         }

//         // Move to the next line
//         printf("\n");
//     }

//     return 0;
// }


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
