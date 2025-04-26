#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int a[size] = { 8, -4, 5, -1, 0, 6, -3, 9, -9, 7 };
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

    for (int i = 1; i < size; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    cout << "\nArray after sorting in ascending order (Insertion Sort):\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
