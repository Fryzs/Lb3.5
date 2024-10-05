#include "lib.h"
using namespace std;

int main() {
    int size = 3;
    int sizeRow = size;
    vector<vector<int>>  matrix = initializeMatrix(size, size);
    printMatrix(matrix, size, sizeRow);
    int choice, x, y, number;
    vector<int> Row(size);
    do {
        cout << "1. Add element to matrix\n";
        cout << "2. Add row to matrix\n";
        cout << "3. Delete element in matrix\n";
        cout << "4.  Delete row in matrix\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter x and y position: ";
            cin >> x >> y;
            if (check(x, y, size, sizeRow) == 1) {
                break;
            }
            cout << "Enter number: ";
            cin >> number;
            addElement(matrix, x, y, number);
            cout << endl;
            printMatrix(matrix, size, sizeRow);
            cout << endl;
            break;
        case 2:
            cout << "Enter row(max "<<size<<") : ";
            for (int i = 0; i < size; i++) {
                cin >> Row[i];
            }
            addRow(matrix, Row);
            sizeRow++;
            printMatrix(matrix, size, sizeRow);
            cout << endl;
            break;
        case 3:
            cout << "Enter x and y position: ";
            cin >> x >> y;
            if ( check(x, y, size, sizeRow) == 1) {
                break;
           }
            cout << endl;
            deleteElement(matrix, x, y);
            printMatrix(matrix, size, sizeRow);
            cout << endl;
            break;
        case 4: 
            cout << "Enter row position: ";
            cin >> x;
            cout << endl;
            deleteRow(matrix, x);
            sizeRow--;
            printMatrix(matrix, size, sizeRow);
            cout << endl;
            break;
        default:
            break;
        }


    } while (choice != 0);


    return 0;
}
