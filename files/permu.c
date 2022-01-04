
#include <stdio.h>

int main()
{

    int count = 0;
    
    for (int i = 0; i <= 11; i++){
        for (int j = 0; j <= 11; j++){
            for (int k = 0; k <= 11; k++){
                if (i+ j + k == 11)
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