#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int a[size] = { 3, -5, 7, -2, 0, 4, -1, 9, -8, 2 };
    int temp[size];

    cout << "Initial array:\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int index = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            temp[index] = a[i];
            index++;
        }
    }

    for (int i = 0; i < size; i++) {
        if (a[i] >= 0) {
            temp[index] = a[i];
            index++;
        }
    }

    for (int i = 0; i < size; i++) {
        a[i] = temp[i];
    }

    cout << "\nArray after rearranging (negatives first, then positives):\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        int tempSwap = a[i];
        a[i] = a[minIndex];
        a[minIndex] = tempSwap;
    }

    cout << "\nArray after sorting in ascending order (Selection Sort):\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
