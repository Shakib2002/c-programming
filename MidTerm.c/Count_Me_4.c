#include <stdio.h>

int main()
 {
    char S[100];
    scanf("%s", S);

    int alpC[26] = {0};  

    for (int i = 0; S[i] != '\0'; i++)
    {
        char ch = S[i];
        if (ch >= 'a' && ch <= 'z')
        {
            alpC[ch - 'a']++;  
        }
    }
 
    for (int i = 0; i < 26; i++)
    {
        if (alpC[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, alpC[i]);
        }
    }

    return 0;
}