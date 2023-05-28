#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("The number is divisible by 2.\n");
    }
    else {
        printf("The number is not divisible by 2.\n");
    }
    
    return 0;
}
