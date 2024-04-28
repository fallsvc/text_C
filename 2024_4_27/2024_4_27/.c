#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void delSameElement(char* str1, char* str2)
{
    char* p1 = str1;
    char* p2 = str2;
    int len = strlen(str1);
    while (*p1 != '\0')
    {
        p2 = str2;
        while (*p2 != '\0')
        {
            if (*p1 == *p2)
            {
                *p1 = '\0';
            }
            p2++;
        }
        p1++;
    }
    int i = 0;
    p1 = str1;
    while (i < len)
    {
        if (*p1 == '\0')
        {
            i++;
            p1++;
            continue;
        }
        printf("%c", *p1);
        i++;
        p1++;
    }
    
}

int main() {
    char str1[100] = { 0 };
    char str2[100] = { 0 };
    gets(str1);
    gets(str2);

    delSameElement(str1, str2);
    return 0;
}