#include <stdio.h>
#include <ctype.h>

int main() 
{
    int T;
     
    scanf("%d", &T);

    while (T--) 
    {
        char S[100];
         
        scanf("%s", S);

        int capC = 0;
        int smaC = 0;
        int digC = 0;

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (isupper(S[i]))
            {
                capC++;
            } 
            else if (islower(S[i]))
            {
                smaC++;
            }
             else if (isdigit(S[i]))
            {
                digC++;
            }
        }

        printf("%d %d %d \n", capC,smaC,digC);
        
    }

    return 0;
}
