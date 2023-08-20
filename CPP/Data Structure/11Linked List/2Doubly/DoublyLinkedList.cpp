#include<iostream>
using namespace std;

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

int main() {
    struct Node *head ;

    //memory allocate in cpp....
    struct Node *one = new Node;
    struct Node *two = new Node;
    struct Node *three = new Node;
     
    // // memory allocate i c...
    // struct Node *one = (struct Node*)malloc(sizeof(struct Node));
    // struct Node *two = (struct Node*)malloc(sizeof(struct Node));
    // struct Node *three = (struct Node*)malloc(sizeof(struct Node));
    

    one->prev = nullptr;
    one->data = 1;
    one->next = two;

    two->prev = one;
    two->data = 2;
    two->next = three;

    three->prev = two;
    three->data = 3;
    three->next = nullptr;

    while (one != nullptr) {
        cout << one->data << " ";
        one = one->next;
    }

    delete one;
    delete two;
    delete three;

    return 0;
}
