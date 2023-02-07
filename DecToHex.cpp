#include <iostream>

using namespace std;

void printHex(int n) {
    char sym[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    cout << "The first " << n << " hexadecimal numbers:" << endl;
    for (int i = 0; i < n; i++) {
        string res;
        int quotient = i;

        if (i == 0) {
            cout << 0 << endl;
            continue;
        }
        while (quotient > 0) {
            int remainder = quotient % 16;
            res += sym[remainder];
            quotient /= 16;
        }

        for (int j = res.length() - 1; j >= 0; j--)
            cout << res[j];
        cout << endl;
    }

    /*for (int i = 0; i < n; i++)
        cout << hex << i << endl;*/
}

int main() {
    int n;
    cout << "Enter the n:";
    cin >> n;
    if (n > 0)
        printHex(n);
    else
        cout << "Invalid input";
    return 0;
}
