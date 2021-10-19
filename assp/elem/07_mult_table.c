// Elementary 7: Multiplication Table for numbers up to 12

#include <stdio.h>

int main(void)
{
    int tab;
    int num = 12;

    printf("Multiplication Table for 12:\n");
    for (int i = 1; i <=12; i++)
    {
	tab = num * i;
	printf("%d * %2d = %2d\n", num, i, tab);
    }

    return 0;
}
