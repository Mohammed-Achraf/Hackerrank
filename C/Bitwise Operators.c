#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int AND, maxAND = 0, OR, maxOR = 0, XOR, maxXOR = 0;
  for(int i = 1; i <= n; i++)
    {
    for(int j = i + 1; j <= n; j++)  
        {
            AND = i & j;
            OR = i | j;
            XOR = i ^ j;
            if(maxAND < AND && AND < k)
                maxAND = AND;
            if(maxOR < OR && OR < k)
                maxOR = OR;
            if(maxXOR < XOR && XOR < k)
                maxXOR = XOR;
        }
    }
    printf("%d\n%d\n%d", maxAND, maxOR, maxXOR);
    }

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
