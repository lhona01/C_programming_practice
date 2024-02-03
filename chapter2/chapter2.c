#include <stdio.h>

/* int main() {
    //variable declaration
    int x;
    float y;
    char z;

    //variable initialization
    x = -4443;
    y = 553.21;
    z = 'M';

    //printing variable contents in standard output
    printf("\nThe value of integer value x is %d", x);
    printf("\nThe value of float y is %f", y);
    printf("\nThe value of chatacter z is %c\n", z);
    return 0;
} */

/* int main() {
    const  int x = 20;
    const float PI = 3.14;
    printf("\nConstant values are %d and %.2f\n", x, PI);
    return 0;
} */

/* int main() {
    int iOperand1 = 0;
    int iOperand2 = 0;
    printf("\nEnter first operand: ");
    scanf("%d", &iOperand1);
    printf("\nEnter second operand:");
    scanf("%d", &iOperand2);
    printf("\nThe result is %d\n", (iOperand1 + iOperand2));
    return 0;
} */

//chapter Program: Shop Profit
int main() {
    float fRevenue, fCost, fProfit;
    printf("\nEnter total revenue: ");
    scanf("%f", &fRevenue);

    printf("\nEnter total cost: ");
    scanf("%f", &fCost);

    fProfit = -fCost + fRevenue;
    printf("\nYour profit is %.2f\n", fProfit);

    return 0;
}
