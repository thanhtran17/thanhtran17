
#include <stdio.h>

int main()
{

    int count = 0;
    
    for (int i = 0; i <= 14; i++){
        for (int j = 0; j <= 14; j++){
            for (int k = 0; k <= 14; k++){
                if (i+ 2*j + 5*k == 14)
                    {
                        count++;
                        printf("%d %d %d\n", i, j, k);
                    }
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}