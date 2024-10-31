#include <stdio.h>
#include <stdlib.h>

int read_arr(int **arr_ptr);
void print_arr(int *arr_ptr, int arr_size);

void main(void)
{
    int *arr_ptr = 0;
    
    int arr_size = read_arr(&arr_ptr);
    print_arr(arr_ptr, arr_size);

    free(arr_ptr);
}

int read_arr(int **arr_ptr)
{
    int arr_size = 3;
    int i;
    
    printf("Enter Array Size: ");
    scanf(" %d", &arr_size);
    
    (*arr_ptr) = (int*)malloc(sizeof(int) * arr_size);

    for (i = 0; i < arr_size; i++)
    {
        printf("Enter Element Number %d: ", i);
        scanf(" %d", &(*arr_ptr)[i]);
    }

    return arr_size;
}

void print_arr(int *arr_ptr, int arr_size)
{
    int i;
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr_ptr[i]);
    }

    printf("\n");
    return;
}