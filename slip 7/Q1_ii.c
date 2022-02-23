#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter the Alphabet || Digit || Special Symbole::");
    scanf("%c",&ch);
    if (isalpha(ch))
    {
        printf("%c is an Aphabet\n",ch);
        if (ch > 64 && ch <91)
        {
            printf("The Character is Uppercase........\n",ch);
        }else{
            printf("The character is Lowercase........\n");
        }
        
    }else if (isdigit(ch))
    {
        printf("%c is a Digit.......\n",ch);
    }else{
        printf("%c is a Special Character........\n");
    }
    
}