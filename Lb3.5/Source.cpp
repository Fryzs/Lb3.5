#include "lib.h"


// ����������� 
vector<vector<int>> initializeMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    return matrix;
}

// ���������
void printMatrix(const vector<vector<int>>& matrix, int size, int sizeRow) {
    for (int i= 0; i < sizeRow; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// ��������� ������ ����� 
void addRow(vector<vector<int>>& matrix, const vector<int>& newRow) {
    matrix.push_back(newRow);
}

// ��������� ����� � ������� 
void deleteRow(vector<vector<int>>& matrix, int rowIndex) {
    if (rowIndex >= 0 && rowIndex < matrix.size()) {
        matrix.erase(matrix.begin() + rowIndex);
    }
    else {
        cerr << "Invalid row index!" << endl;
    }
}

// ��������� ��������
void addElement(vector<vector<int>>& matrix, int rowIndex, int colIndex, int value) {
    if (rowIndex >= 0 && rowIndex < matrix.size() && colIndex >= 0 && colIndex < matrix[0].size()) {
        matrix[rowIndex][colIndex] = value;
    }
    else {
        cerr << "Invalid row or column index!" << endl;
    }
}

// ��������� ��������
void deleteElement(vector<vector<int>>& matrix, int rowIndex, int colIndex) {
    if (rowIndex >= 0 && rowIndex < matrix.size() && colIndex >= 0 && colIndex < matrix[0].size()) {
        matrix[rowIndex][colIndex] = 0;
    }
    else {
        cerr << "Invalid row or column index!" << endl;
    }
}
//��������
int check(int x, int y, int size, int sizeRow) {
    if (x < 0 || y < 0 || y > sizeRow || x > size) {
        cout << "The coordinates are incorrect";
        return 1;
    }
    else  return 0;


}
