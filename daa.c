



#include <stdio.h>
#include <malloc.h>
 
void duplicate(int arr[], int num)
{
    int *count = (int *)calloc(sizeof(int), (num - 2));
    int i;
 
    printf("duplicate elements ");
    for (i = 0; i < num; i++)
    {
        if (count[arr[i]] == 1)
            printf(" %d ", arr[i]);
        else
            count[arr[i]]++;
    }
}
