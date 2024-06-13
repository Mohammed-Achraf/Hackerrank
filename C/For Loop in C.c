#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char *number[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i = a; i <= b; i++)
    {
        if(1 <= i && i <= 9)
            printf("%s",*(number + i - 1));
        else if(i > 9 && (i%2))
            printf("odd");
        else {
            printf("even");
        }
        printf("\n");
    }
    return 0;
}

