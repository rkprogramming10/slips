#include <stdio.h>

int main(){
    char c;
    printf("Enter a Character::");
    scanf("%c",&c);

    if (c>64 && c<91)
    {
        printf("It is Uppercase Character\n");
    }else
    {
        printf("It is Lowercase Character\n");
    }
    
}