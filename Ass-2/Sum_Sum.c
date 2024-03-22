#include <stdio.h>

int main() {
    int N , possum=0, negsum=0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
     {
        int V;
        scanf("%d", &V);
        
        if (V > 0)
        {
            possum = possum+V;
        } 
        else if (V < 0)
         
        {
            negsum = negsum+V;
        }
    }
    
    printf("%d %d\n", possum, negsum);
    
    return 0;
}