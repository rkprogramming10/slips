#include <stdio.h>

int main(){
    int ar,cr,r;
    printf("Enter the Radius of the Circle::");
    scanf("%d",&r);

    ar = 3.14*r*r;
    cr = 3.14*r;
    printf("\nThe Area of the Circle is:: %d",ar);
    printf("\nThe Circumferance of the Circle is:: %d",cr);
}