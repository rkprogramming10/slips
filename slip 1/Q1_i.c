#include <stdio.h>

int main()
{
    float l,b,ar,pr;
    printf("Enter the Length and Breadth::");
    scanf("%f%f",&l,&b);

    ar=l*b;
    pr=2*(l+b);

    printf("\n Area of the Rectangle is:: %f",ar);
    printf("\n Perimeter of the Rectangle is:: %f",pr);
}