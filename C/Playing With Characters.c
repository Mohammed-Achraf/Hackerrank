#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int MAX_LEN = 100;
    char ch, s[MAX_LEN], sen[MAX_LEN];
    scanf("%c%s\n%[^\n]%*C", &ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
    
    

    return 0;
}
