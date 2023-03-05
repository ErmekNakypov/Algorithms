#include <iostream>
#include <ctime>
using namespace std;

void init(int** array, int row, int column) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            array[i][j] = 1 + rand() % 11;
}

void print(int** array, int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void multi(int** array1, int** array2, int** array3, int n, int m, int l) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < l; k++) {
            array3[i][k] = 0;
            for (int j = 0; j < m; j++) {
                array3[i][k] += array1[i][j] * array2[j][k];
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int n, m, l;
    cout << "Enter the n:";
    cin >> n;
    cout << "Enter the m:";
    cin >> m;
    cout << "Enter the l:";
    cin >> l;

    int **array1 = new int*[n];
    for (int i = 0; i < n; i++)
        array1[i] = new int[m];

    int **array2 = new int*[m];
    for (int i = 0; i < m; i++)
        array2[i] = new int[l];

    int **array3 = new int*[n];
    for (int i = 0; i < n; i++)
        array3[i] = new int[l];

    init(array1, n, m);
    init(array2, m, l);

    cout << "First matrix:" << endl;
    print(array1, n, m);

    cout << "Second matrix:" << endl;
    print(array2, m, l);

    multi(array1, array2, array3, n, m, l);
    cout << "After multiplication:" << endl;
    print(array3, n, l);
    return 0;
}
