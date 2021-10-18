// Elementary 6: Sum or Product of numbers from 1 to N

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    unsigned long long int N, ans=0;
    char choice[7];

    printf("Enter a positive integer: ");
    scanf("%llu", &N);

    printf("Compute sum or product from 1 to %llu? (sum/product): ", N);
    scanf("%s", choice);

    if (strcmp(choice, "sum") == 0)
    {
        unsigned long long int sum=1;
        for (int i = 2; i <= N; i++)
        {
            sum += i;
        }
        ans = sum;
    }
    else if (strcmp(choice, "product") == 0)
    {
        unsigned long long int prod=1;
        for (int i = 2; i <= N; i++)
        {
            prod = prod*i;
        }
        ans = prod;
    }
    else
    {
        printf("Input must be 'sum' or 'product'\n");
    }

    printf("The %s of natural numbers from 1 to %llu", choice, N);
    printf(" is %llu\n", ans);

    return 0;
}

