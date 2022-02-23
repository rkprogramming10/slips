#include <stdio.h>

int main(){
    int n;
    double arr[100];
    printf("Enter the Numbers from 1 to 100::");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter number%d:: ", i+1);
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[0]< arr[i]){
            arr[0] = arr[i];
        }
    }

    printf("Largest Number = %.2lf", arr[0]);

    return 0;
    
}