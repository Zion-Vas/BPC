#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 3 == 0) {
        printf("The number is divisible by 3.\n");
    }
    else {
        printf("The number is not divisible by 3.\n");
    }
    
    return 0;
}
