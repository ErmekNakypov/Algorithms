#include <iostream>

using namespace std;
int partition(int* a, int left, int right) {
    int i = left;
    for(int j = left; j < right; j++) {
        if (a[j] < a[right]) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[right]);
    return i;
}

void quick_sort(int* a, int left, int right) {
    int stack[right - left + 1];
    int top = -1;
    stack[++top] = left;
    stack[++top] = right;
    while (top >= 0) {
        int r = stack[top--];
        int l = stack[top--];
        if (l >= r) continue;
        int pivot = partition(a, l, r);
        if (pivot - 1 > l) {
            stack[++top] = l;
            stack[++top] = pivot - 1;
        }
        if (pivot + 1 < r) {
            stack[++top] = pivot + 1;
            stack[++top] = right;
        }
    }
}

int main() {
    int a[] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
    int n = sizeof(a)/sizeof(int);
    quick_sort(a, 0, n - 1);
    for(int i = 0; i < n; i++) {
        std::cout<<a[i]<< " ";
    }
}
