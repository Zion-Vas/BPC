#include <stdio.h>

void printMultiplicationTable(int number) {
    int i;
    
    printf("Multiplication table of %d:\n", number);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    printf("\n");
}

int main() {
    int i;
    
    for (i = 1; i <= 5; i++) {
        printMultiplicationTable(i);
    }
    
    return 0;
}
