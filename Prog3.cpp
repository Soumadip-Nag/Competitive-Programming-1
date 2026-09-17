// WACP to insert elements in a given position array

#include <stdio.h>

int main() {
    int a[100], n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position to insert: ");
    scanf("%d", &position);

    // Shift elements to the right
    for (i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }

    // Insert element
    a[position - 1] = element;

    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
