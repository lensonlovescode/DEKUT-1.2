#include <stdio.h>
int main()
{
    int odd;

    odd = 53;

    while (odd >= 21 && odd <= 53)
    {
        if ((odd%2) != 0)
        {
            printf("%d", odd);
            odd--;
        }
    }
    return (0);
}