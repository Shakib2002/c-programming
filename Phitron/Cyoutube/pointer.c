#include<stdio.h>
// int sum(int a,int b)
// {
//    return a+b;
// }

 int sum()//user define function
{
    int a,b;
    printf("Enter any two number: ");//predefine function
    scanf("%d%d",&a,&b);
    return a + b;
}
 int main()
 {
    int store= sum(10,20);
    printf("%d\n",store); 
  return 0;
 }