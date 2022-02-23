#include <stdio.h>

int main()
{
    int num=1, count, limit;
    float sum = 0.0, fact;
    printf("Enter The Number of Fact::");
    scanf("%d",&limit);
    while (num <= limit)
    {
        fact = 1;
        for (count = 1; count <= num; count++)
        {
            fact = fact*count;
        }
        
        sum = sum + (num / fact);
        num++;
    }

    printf("Sum of the %d is:: %f \n",limit, sum);
}