#include <stdio.h>
int main()
{
    int odd, mod;

    odd = 53;

    while (odd >= 21)
    {
        mod = odd % 2;
        if (mod == 1)
        {
            printf("%d\n", odd);
        }
        odd--;
    }
    return (0);
}