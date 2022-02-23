#include <stdio.h>

int main(){
    int a;
    printf("Enter an Integer:: ");
    scanf("%d",&a);

    if (a / 3 && a / 5)
    {
        printf("An Integer is Divisible by 3 and 5.......\n");
    }else{
        printf("An Integer is not Divisible by 3 and 5......\n");
    }
    
}