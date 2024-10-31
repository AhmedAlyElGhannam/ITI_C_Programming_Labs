#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_SIZE    20

char* my_strcpy(char* dest, const char* src);
char* my_strncpy(char* dest, const char* src, int count);

void main(void)
{
    char s1[MAX_STR_SIZE];
    char s2[MAX_STR_SIZE];
    int n;

    do
    {
        printf("Enter a String of Size 20: ");
        scanf(" %s", &s1);
    } while (strlen(s1) > MAX_STR_SIZE);
    printf("String 1 was saved successfully.\n");

    do
    {
        printf("Enter a String of Size 20: ");
        scanf(" %s", &s2);
    } while (strlen(s2) > MAX_STR_SIZE);
    printf("String 2 was saved successfully.\n");
    
    if (strlen(s1) == strlen(s2))
    {
        my_strcpy(s2, s1);
    }
    else // one is bigger than the other
    {
        n = (strlen(s1) >= strlen(s2)) ? strlen(s2) : strlen(s1);
        my_strncpy(s2, s1, n);
    }

    printf("1st String: %s\n2nd String: %s\n", s1, s2);
}

char* my_strcpy(char* dest, const char* src)
{
    char* res = dest;
    while(*src != 0)
    {
        *dest = *src;
        src += 1;
        dest += 1;
    }

    *dest = 0x00;

    return res;
}

char* my_strncpy(char* dest, const char* src, int count)
{
    int i = 0;
    for (i = 0; i < count; i++)
    {
        if (src[i] == 0x00)
        {
            break;
        }

        dest[i] = src[i];
    }

    dest[i] = 0x00;
    
    return dest;
}
