#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char *s;
    int num[10] = {0};
    s = malloc(1024*sizeof(char));
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 10; j++)
        {
        if(*(s + i) == '0' + j)
        {
            num[j] += 1;
            break;
        }
        }
    }
    for(int i =0; i < 10; i++)
        printf("%d ", num[i]);
    return 0;
}
