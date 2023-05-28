#include <stdio.h>

int main() {
    float num1, num2, product;
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    product = num1 * num2;
    
    printf("Product: %f\n", product);
    
    return 0;
}
