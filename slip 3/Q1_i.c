#include <stdio.h>

int main(){
    int a,b,swapped;
    printf("Enter the value of the A and B::");
    scanf("%d%d",&a,&b);
    printf("before Swapping:- \na=%d \n b= %d",a,b);
    swapped = a;
    a = b;
    b = swapped;

    printf("After Swapping:- \na = %d \n = %d",a,b);

    
    return 0;
}