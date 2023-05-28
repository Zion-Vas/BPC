#include <stdio.h>

void generateDivisibleNumbers(int limit) {
    int number = 1;
    
    while (number <= limit) {
        if (number % 2 == 0 && number % 3 == 0) {
            printf("%d (Pass)\n", number);
        } else {
            printf("%d\n", number);
        }
        number++;
    }
}

int main() {
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printf("Numbers divisible by 2 and 3 up to %d:\n", limit);
    generateDivisibleNumbers(limit);
    
    return 0;
}
