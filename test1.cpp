#include <stdio.h>

void print_stack(char stack[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%c ", stack[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    char stack[100000];  // Assuming a maximum stack size of 100000
    char v[100000];

    for (int i = 0; i < n; i++) {

        scanf(" %c", &v[i]); // Taking input in an array
    }


    int stack_top = -1;

    for (int i = n - 1; i >= 0; i--) {

        stack_top++;
        stack[stack_top] = v[i]; // Inserting in the stack

    }


    int queries;
    scanf("%d", &queries);

    while (queries--) {
        char c;
        scanf(" %c", &c);

        char temp[100];
        int temp_top = -1;

        while (stack[stack_top] != c) {

            temp_top++;
            temp[temp_top] = stack[stack_top]; // Inserting popped characters in a temporary array
            stack_top--;
        }

        char the_book = stack[stack_top]; // Storing the book in a variable
        stack_top--; // Removing the book from the stack

        for (int i = temp_top; i >= 0; i--) {
            stack_top++;
            stack[stack_top] = temp[i]; // Returning popped books in the stack
        }
        stack_top++;
        stack[stack_top] = the_book; // Placing the returned book at the top
    }

    print_stack(stack, stack_top + 1); // Printing the stack

    return 0;
}
