#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int start, int mid, int end) {
    int i = start, j = mid + 1, k = start;
    int b[5];

    while (i <= mid && j <= end) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= end) {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int x = start; x <= end; x++) {
        a[x] = b[x];
    }
}

void mergeSort(int a[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

int main() {
    int a[5] = {2, 5, 4, 6, 1};
    mergeSort(a, 0, 4); 
    
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
