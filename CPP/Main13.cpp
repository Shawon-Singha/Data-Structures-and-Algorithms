#include <bits/stdc++.h>
using namespace std;

int front = -1, rear = 0, totalItems = 0;

int n = 5; // Define the size of the queue

bool isFull() {
    return totalItems == n;
}

bool isEmpty() {
    return totalItems == 0;
}

void enqueue(int arr[], int item) {
    if (isFull()) {
        cout << "Queue is full." << endl;
    } else {
        arr[rear] = item;
        rear = (rear + 1) % n;
        totalItems++;
    }
}

int dequeue(int arr[]) {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return -1; // Return a sentinel value to indicate an empty queue or handle it differently as needed.
    } else {
         int dequeuedItem = arr[front];
        front = (front + 1) % n;
        totalItems--;
        return dequeueItem;
    }
}

int main() {
    int arr[n]; // Declare the queue array

    enqueue(arr, 10);
    enqueue(arr, 20);
    enqueue(arr, 30);

    int dequeuedValue = dequeue(arr);
    if (dequeuedValue != -1) {
        cout << "Dequeued item: " << dequeuedValue << endl;
    }

    return 0;
}
 