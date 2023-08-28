#include <stdio.h>
#include <stdlib.h>

int main() {
    int* p;
    int n;
    scanf("%d", &n);

    // Input elements
    p = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    // Reallocation of memory
    int element;
    int pos;
    printf("Enter the index: ");
    scanf("%d", &pos);
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    p = (int*)realloc(p, (n + 1) * sizeof(int));
    
    // Shift elements to make space for the new element
    for (int i = n; i > pos; i--) {
        p[i] = p[i - 1];
    }
    p[pos] = element;

    // Printing the new array
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", p[i]);
    }

    free(p); // Don't forget to free dynamically allocated memory
    return 0;
}