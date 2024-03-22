#include <stdio.h>
#include <string.h>

int con(char ch) {
     
    if ((ch >= 'a' && ch <= 'z') && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char S[100];
    scanf("%s", S);

    int lent = strlen(S);
    int conC = 0;

    for (int i = 0; i < lent; i++)
    {
        if (con(S[i]))
        {
            conC++;
        }
    }

    printf("%d\n", conC);

    return 0;
}