#include <stdio.h>
#include <string.h>
int main()
{
    char num1[51], num2[51], result[52], *p1 = num1, *p2 = num2;
    int i, j, k = 0, sum, carry = 0;
    printf("Enter first number: ");
    scanf("%s", p1);
    printf("Enter second number: ");
    scanf("%s", p2);
    i = strlen(p1) - 1;
    j = strlen(p2) - 1;
    while(i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if(i >= 0)
            sum += p1[i] - '0';
        if(j >= 0)
            sum += p2[j] - '0';
        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
        i--;
        j--;
    }
    printf("Result = ");
    for(i = k - 1; i >= 0; i--)
        printf("%c", result[i]);
}
