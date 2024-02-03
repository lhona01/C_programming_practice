#include <stdio.h>

//create a program that outputs the result of the formula
/* int main() {
    int a, b, x, y, f;
    a = 5;
    b = 1;
    x = 10;
    y = 5;
    f = (a - b)*(x - y);
    printf("\nThe result is %d\n", f);
    return 0;
} */

//update above program ask user for input
/* int main() {
    int a, b, x, y, f;
    printf("\na: ");
    scanf("%d", &a);

    printf("\nb: ");
    scanf("%d", &b);

    printf("\nx: ");
    scanf("%d", &x);

    printf("\ny: ");
    scanf("%d", &y);

    f = (a - b)*(x - y);
    printf("\nThe result is %d\n", f);
    return 0;
} */

// Create a program that prompts user for a character name.
/* int main() {
    char cName;
    
    printf("\nEnter a character name: ");
    scanf("%c", &cName);

    printf("\nGreetings %c\n", cName);
    return 0;
} */

//create a shop revenue program
/* int main() {
    float fRevenue, fPrice, fQuantity;

    printf("\nPrice: ");
    scanf("%f", &fPrice);

    printf("\nQuantity: ");
    scanf("%f", &fQuantity);

    fRevenue = fPrice * fQuantity;
    printf("\nTotalRevenut = %.2f\n", fRevenue);
    return 0;
} */

//Build a Shop Commission Program
int main() {
    const float RATE = 0.15;
    float fCommission, fSalesPrice, fCost;

    printf("\nSalse Price: ");
    scanf("%f", &fSalesPrice);

    printf("\nCost: ");
    scanf("%f", &fCost);

    fCommission = RATE * (fSalesPrice - fCost);
    printf("\nCommission = %.2f\n", fCommission);

    return 0;
}