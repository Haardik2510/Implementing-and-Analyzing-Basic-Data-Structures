#include <iostream>
using namespace std;

class StaticArrayArithmetic {
private:
    int arr[4][4];

public:
    StaticArrayArithmetic() {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                arr[i][j] = 0;
    }

    void insert(int value, int row, int col) {
        arr[row][col] = value;
    }

    void rowWiseAddition() {
        for (int i = 0; i < 4; i++) {
            int sum = 0;
            for (int j = 0; j < 4; j++)
                sum += arr[i][j];
            cout << "Sum of row " << i << " = " << sum << endl;
        }
    }

    void cumulativeAddition() {
        int totalSum = 0;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                totalSum += arr[i][j];
        cout << "Cumulative sum of all elements = " << totalSum << endl;
    }

    void rowWiseSubtraction() {
        for (int i = 0; i < 4; i++) {
            int difference = arr[i][0]; // Subtract from the first element of the row
            for (int j = 1; j < 4; j++)
                difference -= arr[i][j];
            cout << "Difference of row " << i << " = " << difference << endl;
        }
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
    StaticArrayArithmetic arrArithmetic;
    arrArithmetic.insert(10, 0, 0);
    arrArithmetic.insert(20, 0, 1);
    arrArithmetic.insert(30, 0, 2);
    arrArithmetic.insert(40, 0, 3);

    arrArithmetic.insert(50, 1, 0);
    arrArithmetic.insert(60, 1, 1);
    arrArithmetic.insert(70, 1, 2);
    arrArithmetic.insert(80, 1, 3);

    cout << "2D Array:" << endl;
    arrArithmetic.traverse();

    cout << "\nRow-wise addition:" << endl;
    arrArithmetic.rowWiseAddition();

    cout << "\nCumulative addition:" << endl;
    arrArithmetic.cumulativeAddition();

    cout << "\nRow-wise subtraction:" << endl;
    arrArithmetic.rowWiseSubtraction();

    return 0;
}
