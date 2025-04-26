#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int a[], int low, int high) {
    int pivot = a[high]; 
    int i = low - 1;    

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);

        quickSort(a, low, pi - 1);  
        quickSort(a, pi + 1, high); 
    }
}

int main() {
    const int size = 10;
    int a[size] = { 6, -15, 7, -8, 0, 5, -4, 9, -7, 12 };
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

    quickSort(a, 0, size - 1);

    cout << "\nArray after sorting in ascending order (Quick Sort):\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
