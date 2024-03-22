#include<stdio.h>
 int main()
 {
    int arr[5];
    for(int i=0; i<=4; i++)
    {
        printf("Enter the Elements Number: %d\n",i+1);
        scanf("%d",&arr[i]);
    }
     for(int i=4; i>=0; i--)
     {
        printf(" Enter The Reverce Number:\n%d",arr[i]);
     }


  return 0;
 }