
 #include <stdio.h>

int main() {
    char C;
    scanf("%c", &C);
    if (C >= 'a' && C <= 'z')
     {
        C++;

        if (C > 'z') 
        {
            C = 'a';
        }
        printf("%c\n", C);
    } 
    else 
    {
        printf("Invalid input.\n");
    }

    return 0;
}