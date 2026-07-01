#include <stdio.h>
int main()
{
    char str[100], ch, *p;
    int i = 1;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the character: ");
    scanf(" %c", &ch);
    p = str;
    while(*p != '\0')
    {
        if(*p == ch)
            printf("%d ", i);
        p++;
        i++;
    }
}
