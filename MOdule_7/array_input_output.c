// #include<stdio.h>
//  int main()
//  {
//     int ar[3];
//     ar[0]=100;
//     ar[1]=200;
//     ar[3]=300;

//     printf("%d %d %d",ar[0],ar[1],ar[2]); 
//   return 0;
//  }



#include<stdio.h>
 int main()
 {
     int ar[5];
     for(int i=0; i<5; i++)
     {
        scanf("%d",&ar[i]);
     }
     
     for(int i=0; i<5; i++)
     {
        printf("%d\n",ar[i]);
     }

  return 0;
 }