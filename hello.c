// // #include <stdio.h>
// // int main()
// // {
// //     printf("Hello Shakib\n");
// //     printf("100%%\tBangladesh");
// // } 


// // // I AM A PROGRAMMER  


// // // Special Charaters
// // // \n - new tab
// // // \t - tab


// #include<stdio.h>
//  int main()
//  {
//     int i = 10;
// while (i >= 0) {
//     printf("%d ", i);
//     i -= 2;
// }


//   return 0;
//  }

#include<stdio.h>
 int main()
 {
    int a[2][2],i,j;
    printf("Enter array elements:\n ");5
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d ",a[i][j]);
        }
    }
    printf("Matrix Elements\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
  return 0;
 }