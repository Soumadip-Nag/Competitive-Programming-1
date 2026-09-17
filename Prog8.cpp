// WACP to implement hash table

#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

// Initialize hash table
void initialize() {
    int i;

    for (i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Insert element
void insert(int key) {
    int index;

    index = key % SIZE;

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;

    printf("%d inserted at index %d\n", key, index);
}

// Search element
void search(int key) {
    int index;

    index = key % SIZE;

    while (hashTable[index] != -1) {

        if (hashTable[index] == key) {
            printf("%d found at index %d\n", key, index);
            return;
        }

        index = (index + 1) % SIZE;
    }

    printf("%d not found\n", key);
}

// Display hash table
void display() {
    int i;

    printf("\nHash Table:\n");

    for (i = 0; i < SIZE; i++) {
        if (hashTable[i] == -1)
            printf("%d : Empty\n", i);
        else
            printf("%d : %d\n", i, hashTable[i]);
    }
}

int main() {
    int choice, key;

    initialize();

    while (1) {
        printf("\n1. Insert\n");
        printf("2. Search\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter key: ");
                scanf("%d", &key);
                insert(key);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
