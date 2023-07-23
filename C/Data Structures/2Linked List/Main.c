#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    // Allocate memory for each node
    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));

    // Input data into each node
    a->data = 10;
    b->data = 20;
    c->data = 30;

    // Connect each node to each other
    a->next = b;
    b->next = c;
    c->next = NULL;

    // Print the linked list
    struct Node *current = a; // Use a separate pointer to traverse the list
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n"); // Print "NULL" at the end of the list

    // Don't forget to free the allocated memory
    free(a);
    free(b);
    free(c);

    return 0;
}
