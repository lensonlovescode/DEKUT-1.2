#include <stdio.h>
/**
 *
 *
 *
 *
 */
 int main()
{
        int i, age, oldest, sum, avg;

        int ages[5];

        i = 0;

        printf("Enter user ages as per the prompt\n");

        while (i < 5)
        {
                printf("Enter age %d\n", i + 1);
                scanf("%d", &age);
                ages[i] = age;
                i++;
        }

        i = 0;
        sum = 0;
        avg = 0;

        while (i < 5)
        {
                sum = sum + ages[i];
                i++;
        }
        printf("sum of ages = %d\n", sum);
        avg = sum/5;
        printf("average age = %d\n", avg);
        oldest = ages[0];
        for (i = 0; i < 5; i++)
        {
                if (ages[i] > oldest)
                {
                        oldest = ages[i];
                }
        }
        printf("oldest = %d\n", oldest);
        return (0);
 }