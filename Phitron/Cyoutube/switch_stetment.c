#include<stdio.h>
int main()
{
    int a,b,c;
    int ch;
    printf("\nEnter the two numbers ");
    scanf("%d%d",&a,&b);

    printf("\nEnter choice ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:c=a+b;
        printf("%d",c);
        break;

        case 2:c=a-b;
        printf("%d",c);
        break;

        case 3:c=a*b;
        printf("%d",c);
        break;
        case 4:c=a/b;
        printf("%d",c);
        break;
        default:
        printf("\ninvalid choice");
    }
    return 0;
}