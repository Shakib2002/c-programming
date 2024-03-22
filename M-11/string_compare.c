// #include<stdio.h>
//  int main()
//  {
//      char a[100],b[100];
//      scanf("%s %s",a,b);

//      int i=0;
//      while(1)
//      {
//         if(a[i]=='\0' && b[i]=='\0')
//         {
//             printf("Same\n");
//             break;
//         }
//         else if(a[i]=='\0')
//         {
//             printf("a choto");
//             break;
//         }
//         else if(b[i]=='\0')
//         {
//             printf("b choto");
//             break;
//         }
//         if(a[i]==b[i])
//         {
//             i++;
//         }
//         else if(a[i]<b[i])
//         {
//             printf("a choto");
//             break;
//         }
//         else
//         {
//             printf("b choto");
//             break;
//         }


//      }
//   return 0;
//  }


// #include<stdio.h>
// #include<string.h>
//  int main()
//  {
//      char a[100],b[100];
//      scanf("%s %s",a,b);

//      int value= strcmp(a,b);
//      printf("%d",value);
//   return 0;
//  }



#include<stdio.h>
#include<string.h>
 int main()
 {
     char a[100],b[100];
     scanf("%s %s",a,b);

     int value= strcmp(a,b);
    //  printf("%d",value);

     if(value<0)
     {
        printf("A is Smaller\n");
     }
     else if(value>0)
     {
        printf("B is Smaller\n");
     }
     else
     {
        printf("Same\n");
     }
  return 0;
 }