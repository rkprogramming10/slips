#include <stdio.h>

int main(){
    int n;
    printf("Enter the +ve Integer::");
    scanf("%d",&n);
    printf("Factorial of %d is = %ld", n, multiplyNumbers(n));

}
int multiplyNumbers(int n) {
    if(n>=1){
        return n*multiplyNumbers(n-1);
    }else{
        return 1;
    }
}