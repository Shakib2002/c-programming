// #include <stdio.h>
// #include <math.h>

// int main() {
//     int m1, m2;
//     float d;
//     scanf("%d %d %f", &m1,&m2,&d);
    
//     float d_sav = (float)m1 / (m1 + m2) * d;
    
  
//     int ds = (int)d_sav;
//     printf("%d\n", ds);
    
//     return 0;
// }
 

#include <stdio.h>

int main()
 {
    int t, m1, m2, d;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);

        int TW = m1 * d;
        int NF = m1 + m2;
        int ND = TW / NF;

        int fewDay = d - ND;
        printf("%d\n", fewDay);
    }

    return 0;
}

 