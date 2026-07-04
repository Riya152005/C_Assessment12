#include <stdio.h>
int main()
{
    long long a, b;
    char op;
    while(1)
    {
        printf("\nEnter operator (+,-,*,/,e to Exit): ");
        scanf(" %c", &op);
        if(op == 'e')
            break;
        printf("Enter two numbers: ");
        scanf("%lld %lld", &a, &b);
        if(op == '+')
            printf("Result = %lld\n", a + b);
        else if(op == '-')
            printf("Result = %lld\n", a - b);
        else if(op == '*')
            printf("Result = %lld\n", a * b);
        else if(op == '/')
        {
            if(b == 0)
                printf("Division by zero not possible\n");
            else
            {
                printf("Quotient = %lld\n", a / b);
                printf("Remainder = %lld\n", a % b);
            }
        }
        else
            printf("Invalid Operator\n");
    }
    printf("Calculator Closed");
}
