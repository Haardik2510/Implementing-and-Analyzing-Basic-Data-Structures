#include <iostream>
using namespace std;

class StaticArray2D {
private:
    int arr[4][4];

public:
    StaticArray2D() {
        // Initialize the array with zero values
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                arr[i][j] = 0;
    }

    void insert(int value, int row, int col) {
        if (row >= 0 && row < 4 && col >= 0 && col < 4)
            arr[row][col] = value;
        else
            cout << "Insertion failed. Index out of bounds." << endl;
    }

    void deleteAtIndex(int row, int col) {
        if (row >= 0 && row < 4 && col >= 0 && col < 4)
            arr[row][col] = 0;
        else
            cout << "Deletion failed. Index out of bounds." << endl;
    }

    void traverse() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    StaticArray2D arr2D;
    arr2D.insert(10, 0, 0);
    arr2D.insert(20, 1, 1);
    arr2D.insert(30, 2, 2);
    cout << "2D Array after insertion:" << endl;
    arr2D.traverse();

    arr2D.deleteAtIndex(1, 1);
    cout << "2D Array after deletion:" << endl;
    arr2D.traverse();

    return 0;
}
