#include <stdio.h>

int main()
{
    int min,max;
    printf("Enter Two Numbers:: ");
    scanf("%d%d",&min,&max);

    printf("The Numbers between %d and %d are::\n",min,max);
    while (min <= max)
    {
        printf("%d",min);
        min++;
    }
    printf("\n");
    return 0;
    
}