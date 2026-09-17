#include <stdio.h>

int main() {
    int a[100], n, i;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Assume first element is both maximum and minimum
    max = a[0];
    min = a[0];

    // Find maximum and minimum
    for (i = 1; i < n; i++) {

        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
