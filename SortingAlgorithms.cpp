#include <iostream>
#include <stdio.h>
 
using namespace std;
 
void bubble_sort(int a[], int n) {
    for (int j = 0; j < n; j++) {
        bool is_sorted = true;
        for (int i = 0; i < n - 1 - j; ++i) {
            if (a[i] > a[i + 1]) {
                is_sorted = false;
                swap(a[i], a[i + 1]);
            }
        }
        if (is_sorted) break;
    }
}
 
void selection_sort(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }
}

void insertion_sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int j = i + 1;
        while(j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j --;
        }
    }
}
 
// inversion
// i, j -> i < j
// a[i] > a[j]
 
 
int main() {
    int a[] = {9, 7, 6, 2, 3, 2};
    int n = sizeof(a) / sizeof(int);
 
    insertion_sort(a, n);
 
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}
