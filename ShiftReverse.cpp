#include <iostream>
using namespace std;

void shiftArray(int array[], int p)
{
    for (int i = 0; i < p / 2; i++)
    {
        int temp = array[i];
        array[i] = array[p - i - 1];
        array[p - i - 1] = temp;
    }
}

int main()
{
    const int n = 5;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << i << ": ";
        cin >> array[i];
    }

    int k;
    cout << "Enter the k: ";
    cin >> k;

    if (k >= 0 && k <= n)
    {

        shiftArray(array, n - k);
        shiftArray(array + n - k, k);
        shiftArray(array, n);
        // shiftArray(array, k);
        // shiftArray(array + k, n - k);
        // shiftArray(array, n);

        for (int i = 0; i < n; i++)
            cout << array[i] << " ";
    }
    else
        cout << "Invalid input!";
    return 0;
}
