#include<stdio.h>

int main(){

    int n;
    scanf(" %d ", &n);

    char stack[100001];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c ", &stack[i]); // taking input of the books
    }

    int queries;
    scanf(" %d ", &queries);

    while (queries--)
    {
        char ch;
        scanf(" %c ", &ch);

        int idx = 0;

        char temp[100001]; // temporary array to store remove books

        while (stack[idx] != ch) // iterate till find the book
        {
            temp[idx] = stack[idx];
            idx++;
        }


        char book = stack[idx]; // store the desired book
        idx++;

        for (int i = 1; i < idx; i++)
        {
            stack[i] = temp[i-1]; // placing removed books back in the stack
        }

        stack[0] = book; // placing the book at top

        

    }
        

    
    for(int i = 0; i < n; i++){

        printf("%c ", stack[i]); // printing the final stack
    }
    
    printf("\n");
    
    

}