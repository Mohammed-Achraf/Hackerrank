#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    for (i = 0; i< num/2; i++)
    {
        int temp =0;
        temp = *(arr + i);
        *(arr + i) = *(arr + num -1 - i);
        *(arr + num - 1 - i) = temp;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    free(arr);
    return 0;
}
