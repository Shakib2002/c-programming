#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the Marks: ");
    scanf("%d", &marks);

    if(marks==100)
    {
        printf("Genius");
    }

    else if(marks>=8 && marks<=80)
    {
        printf("Good");
    }

    else if(marks>80)
    {
        printf("Average");
    }

    else
    {
        printf("Failed");
    }
    return 0;
}