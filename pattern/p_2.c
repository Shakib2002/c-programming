#include<stdio.h>
 int main()
 {
//      int n,i,j;
//      scanf("%d", &n);
//      for(i=1; i<=n; i++)
//      {
//         for(j=1; j<=5; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//      }
//   return 0;
//  }

#include<stdio.h>
void main()
{
    int i, j;


    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
