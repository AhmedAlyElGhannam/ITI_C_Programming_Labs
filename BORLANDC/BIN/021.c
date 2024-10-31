#include <stdio.h>
#include <stdlib.h>

int read_str_arr(char ***str_arr);
void print_arr(char **str_arr, int arr_size);

void main(void)
{
    char **str_arr = 0;
    int str_arr_size;
    int i;
    
    str_arr_size = read_str_arr(&str_arr);
    print_arr(str_arr, str_arr_size);

    for (i = 0; i < str_arr_size; i++)
    {
        free(str_arr[i]);
    }
    free(str_arr);
}

int read_str_arr(char ***str_arr)
{
    int arr_size;
    int str_size;
    int i;
    
    printf("Enter Array Size: ");
    scanf(" %d", &arr_size);

    printf("Enter String Size: ");
    scanf(" %d", &str_size);
    
    (*str_arr) = (char**)malloc(sizeof(char*) * arr_size);
    if (*str_arr == NULL)
        return 0;

    for (i = 0; i < arr_size; i++)
    {
        (*str_arr)[i] = (char*)malloc(sizeof(char) * (str_size + 1));
        if ((*str_arr)[i] == NULL)
            return 0;

        printf("Enter String Number %d: ", i+1);
        scanf(" %s", (*str_arr)[i]);
    }

    return arr_size;
}

void print_arr(char **str_arr, int arr_size)
{
    int i;
    for (i = 0; i < arr_size; i++)
    {
        printf("%s ", str_arr[i]);
    }

    printf("\n");
    return;
}