#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int i = 0; i < (n * 2) - 1; i++)
    {
        for(int j = 0; j < (n * 2) - 1; j++)
        {
            int dis = i < j ? i : j;
            dis = dis < (n * 2) - i - 2 ? dis : (n * 2) - i - 2;
            dis = dis < (n * 2) - j - 2 ? dis : (n * 2) - j - 2;
            printf("%d ", n - dis);
        } 
        printf("\n");
    }
    return 0;
}
