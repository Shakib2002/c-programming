// #include<stdio.h>
//  int main()
//  {
//     char a[22];
//     gets(a);
//     printf("%s",a); 
//   return 0;
//  }


#include<stdio.h>
#include<string.h>
 int main()
 {
    char a[100];
    fgets(a,26,stdin);
    printf("%s",a); 
  return 0;
 }