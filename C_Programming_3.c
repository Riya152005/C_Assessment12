#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], sub[100];
    char *p;
    printf("Enter the main string: ");
    scanf("%s", str);
    printf("Enter the substring: ");
    scanf("%s", sub);
    p = strstr(str, sub);
    if(p != NULL)
        printf("Position = %ld", (p - str) + 1);
    else
        printf("Substring not found");
}
