/* WACP to find effective address of an element
of a 2-D array stored in Row Major
Order form.*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int base, size;
    int effectiveAddress;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter size of each element (in bytes): ");
    scanf("%d", &size);

    printf("Enter row index (i): ");
    scanf("%d", &i);

    printf("Enter column index (j): ");
    scanf("%d", &j);

    effectiveAddress = base + ((i * cols) + j) * size;

    printf("Effective Address = %d\n", effectiveAddress);

    return 0;
}
