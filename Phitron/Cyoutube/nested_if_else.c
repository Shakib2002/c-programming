#include<stdio.h>
int main()
{
    int a=10,b=5,c=50;
    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("%d\n%d",b);
        }
        else
        {
            printf("%d",c);
        }
    }
    return 0;
}