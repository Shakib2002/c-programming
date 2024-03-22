// #include<stdio.h>
//  int main()
//  {
//     int n,q;
//     scanf("%d%d",&n,&q);

//     int ar[n];

//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",ar[i]);
//     }

//     for(int i=0; i<q; i++)
//     {
//         int x;
//         int found = 0;
//         scanf("%d",&x);

//         for(int j=0; j<n; j++)
//         {
//             if(ar[j]==x)
//             {
//                 found=1;
//                 break;
//             }
//         }

//         if (found)
//         {
//             printf("found\n");
//         }
//         else
//         {
//             printf("not found\n");
//         }

//     }


//   return 0;
//  }


#include <stdio.h>

int main() {
    int N, Q;

     scanf("%d %d", &N, &Q);

    int A[N];

     for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

     for (int i = 0; i < Q; i++) {
        int X;
        int found = 0;  

         scanf("%d", &X);

         for (int j = 0; j < N; j++) {
            if (A[j] == X) {
                found = 1;
                break;  
            }
        }

         if (found) {
            printf("found\n");
        } else {
            printf("not found\n");
        }
    }

    return 0;
}
