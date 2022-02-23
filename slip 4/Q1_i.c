#include <stdio.h>

int main(){
    float l,b,h,sa;
    printf("Enter the Three Dimension i.e.(length,breadth,height)::");
    scanf("%f%f%f",&l,&b,&h);
    sa = 2*(l*b+l*h+b*h);
    printf("SurfaceArea if the Cuboid is::%f",sa);
}