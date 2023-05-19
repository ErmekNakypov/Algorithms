#include <iostream>

using namespace std;

void merge(int *a, int left, int middle, int right) {
    int n = middle - left + 1;
    int m = right - middle;
    int left_arr[n], right_arr[m];
    for (int i = 0; i < n; ++i) {
        left_arr[i] = a[i + left];
    }
    for (int i = 0; i < m; ++i) {
        right_arr[i] = a[i + middle + 1];
    }

    int i = 0, j = 0, k = left;

    while (i < n && j < m) {
        if (left_arr[i] < right_arr[j]) {
            a[k] = left_arr[i];
            i++;
        } else {
            a[k] = right_arr[j];
            j++;
        }
        k++;
    }
    while (i < n)
        a[k++] = left_arr[i++];
    while (j < m)
        a[k++] = right_arr[j++];
}

void merge_sort(int *a, int n) {
   int p, l, h;
   for (p = 2; p <= n; p *= 2) {
       for (int i = 0; i + p - 1 < n; i += p) {
           l = i;
           h = i + p - 1;
           int mid =(l + h) / 2;
           merge(a, l, mid, h);
       }
   }
   if (p / 2 < n)
       merge(a, 0, p / 2, n - 1);
}

int main() {
    int arr[] = {8, 7, 4, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    merge_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
