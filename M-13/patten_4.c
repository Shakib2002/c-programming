#include<stdio.h>
 int main()
 {
     int n,s,k;
     scanf("%d",&n);
//step-
     s=n-1;
     k=1;
//step-ekta line
     for(int i=1; i<=(2*n)-1; i++)
     {
        for(int j=1; j<=s; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
//line ses-step3
         if(i<=n-1)
         {
            s--;
            k=k+2;
         }
         else
         {
            s++;
            k=k-2;
         }
         printf("\n");
     }
  return 0;
 }