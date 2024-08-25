#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i + 1) {
            cout << j;
            j++;
        }

        int k = 1;
        while (k < 2 * (i - 1)) {
            cout << "*";
            k++;
        }

        j = n - i + 1;
        while (j >= 1) {
            cout << j;
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
