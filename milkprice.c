#include <stdio.h>

int main() {
    float cost, volume, price_per_liter;

    // Read input values
    printf("Enter total cost of milk: ");
    scanf("%f", &cost);

    printf("Enter volume of milk in liters: ");
    scanf("%f", &volume);

    // Calculate price per liter
    price_per_liter = cost / volume;

    // Display result
    printf("Price per liter of milk is %.2f\n", price_per_liter);

    return 0;
}
