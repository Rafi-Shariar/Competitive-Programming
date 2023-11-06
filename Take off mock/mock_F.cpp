#include <stdio.h>

void print_stack(char stack[], int size) {

    for (int i = size - 1; i >= 0; i--) {

        printf("%c ", stack[i]);
    }

    printf("\n");
}

int main() {
    int n;
    scanf(" %d ", &n);

    char stack[100001];  
    char v[100001];

    for (int i = 0; i < n; i++) {

        scanf(" %c ", &v[i]); // Taking input in an array
    }


    int stack_top = -1;

    for (int i = n - 1; i >= 0; i--) {

        stack_top++;
        stack[stack_top] = v[i]; // Inserting in the stack

    }


    int queries;
    scanf(" %d ", &queries);

    while (queries--) {

        char ch;
        scanf(" %c ", &ch);

        char temp[100001];
        int temp_top = -1;

        while (stack[stack_top] != ch) {

            temp_top++;
            temp[temp_top] = stack[stack_top]; // Inserting popped characters in a temporary array
            stack_top--;
        }

        char the_book = stack[stack_top]; // Storing the desired book in a variable
        stack_top--; // Removing the book from the stack

        for (int i = temp_top; i >= 0; i--) {

            stack_top++;
            stack[stack_top] = temp[i]; // Returning popped books in the stack

        }

        stack_top++;
        stack[stack_top] = the_book; // Placing the returned book at the top

    }

    print_stack(stack, stack_top + 1); 

    return 0;
}
