#include <stdio.h>

int main() {
    int a;
    
    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &a);
  
    if (a % 2 == 0) 
    {
        printf("%d is Even.\n", a);
    } 
    else
    {
        printf("%d is Odd.\n", a);
    }

    return 0;
}
