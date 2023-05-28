#include <stdio.h>

void generateOddNumbers(int limit) {
    int number = 1;
    
    while (number <= limit) {
        printf("%d ", number);
        number += 2;
    }
}

int main() {
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printf("Odd numbers up to %d:\n", limit);
    generateOddNumbers(limit);
    
    return 0;
}
