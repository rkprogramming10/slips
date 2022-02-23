#include <stdio.h>

int main(){
    int a,n,i,flag;
    char opt;
    do{
        printf("*------------ Menu -------------*");
        printf("\n1)Even Number \n2)Odd Number \n3)Exit.");
        printf("\n Enter your Choice from the above Menu::");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
        printf("Enter the Number::");
        scanf("%d",&a);
            if (a %2==0)
            {
                printf("The Number Is Even.....");
            }else{
                printf("The number is Odd......");
            }
            break;
        case 2:
            printf("Enter the Number::");
            scanf("%d", &n);
            if (n == 0 || n == 1)
                flag = 1;

            for (i = 2; i <= n / 2; ++i)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                printf("%d is a prime number.", n);
            else
                printf("%d is not a prime number.", n);
            break;

        default:
            printf("Exit menu");
        }
    }while (opt != 3);
    
    
}