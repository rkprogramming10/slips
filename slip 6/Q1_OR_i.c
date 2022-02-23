#include <stdio.h>

int main() {
    int a, b, c, opt;
    char char1 ;
    printf("--------*--- Menu ---*--------");
    printf("\n1.)Check Uppercase and Lowercase \n2.)Display ASCII Value \n3.)Display Next and Previous Charecters \n4.)Exit");
    printf("\n Enter your Choice from the above Menu::");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Enter the Characters::");
        scanf("%c",&a);
        if (a > 64 && a < 91)
        {
            printf("It is Uppercase Character\n",a);
        }else{
            printf("It is Lowercase Character\n");
        }
        break;
    case 2:
        printf("Enter the Character:: ");
        scanf("%c",char1);
        printf("\n The ASCII value of character is:: %d", char1-1);

    default:
        break;
    }
}