#include <iostream>
using namespace std;

class StaticArray1D {
private:
    int arr[10];
    int size;

public:
    StaticArray1D() {
        size = 0;
    }

    void insert(int value, int index) {
        if (index >= 0 && index <= size && size < 10) {
            for (int i = size; i > index; i--)
                arr[i] = arr[i - 1];
            arr[index] = value;
            size++;
        } else {
            cout << "Insertion failed. Index out of bounds or array is full." << endl;
        }
    }

    void deleteAtIndex(int index) {
        if (index >= 0 && index < size) {
            for (int i = index; i < size - 1; i++)
                arr[i] = arr[i + 1];
            size--;
        } else {
            cout << "Deletion failed. Index out of bounds." << endl;
        }
    }

    void traverse() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    StaticArray1D arr1D;
    arr1D.insert(10, 0);
    arr1D.insert(20, 1);
    arr1D.insert(30, 2);
    cout << "Array after insertion: ";
    arr1D.traverse();

    arr1D.deleteAtIndex(1);
    cout << "Array after deletion: ";
    arr1D.traverse();

    return 0;
}
