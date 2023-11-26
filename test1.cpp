#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    long long int ID;
    char Title[100];
    char author[100];
    char genre[100];
    struct Node* next;
};

struct Library
{
    int sz;
    struct Node* head;
};

struct Node* CreateNewNode(long long int id, char title[], char Author[], char Genre[])
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->ID = id;
    strcpy(newnode->Title, title);
    strcpy(newnode->author, Author);
    strcpy(newnode->genre, Genre);
    newnode->next = NULL;

    return newnode;
}

void add_book(struct Library* list, long long int id, char title[], char Author[], char Genre[])
{
    struct Node* newnode = CreateNewNode(id, title, Author, Genre);

    if (list->head == NULL)
    {
        list->head = newnode;
        list->sz++;
        return;
    }

    struct Node* current = list->head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newnode;
    list->sz++;
}

void remove_book(struct Library* list, long long int id)
{
    struct Node* a = list->head;

    if (a == NULL)
    {
        printf("Book not found\n");
        return;
    }

    if (a->ID == id)
    {
        list->head = a->next;
        free(a);
        list->sz--;
        return;
    }

    while (a != NULL && a->next != NULL)
    {
        if (a->next->ID == id)
        {
            struct Node* b = a->next;
            a->next = b->next;
            free(b);
            list->sz--;
            return;
        }
        a = a->next;
    }

    printf("Book not found\n");
}

void display(struct Library* list)
{
    struct Node* a = list->head;

    printf("Book List : \n");

    while (a != NULL)
    {
        printf("Title : %s , Author : %s, Genre : %s, ID : %lld \n", a->Title, a->author, a->genre, a->ID);
        a = a->next;
    }

    printf("\n");
}

void find(struct Library* list, long long int id, char title[])
{
    struct Node* a = list->head;

    while (a != NULL)
    {
        if (a->ID == id || strcmp(a->Title, title) == 0)
        {
            printf("Book found \n");
            printf("Title : %s , Author : %s, Genre : %s, ID : %lld \n", a->Title, a->author, a->genre, a->ID);
            return;
        }

        a = a->next;
    }

    printf("Book is not available !\n");
}

int main()
{
    struct Library l;
    l.head = NULL;
    l.sz = 0;

    add_book(&l, 12341234, "Water", "Rafi", "Story");
    add_book(&l, 1233456, "Air", "Koci", "Poetry");
    add_book(&l, 1235234, "Land", "Rifat", "Story");
    add_book(&l, 1233454, "CSE", "Esha", "Poetry");
    add_book(&l, 1232344, "what!", "Piklu", "magazine");
    add_book(&l, 23353434, "power", "lamia", "Story");

    display(&l);

    remove_book(&l, 1233454);

    printf("after removing 1233454 \n");

    display(&l);

    find(&l, 1232344, "Piklu");

    return 0;
}
