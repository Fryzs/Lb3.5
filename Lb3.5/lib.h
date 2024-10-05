#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> initializeMatrix(int rows, int cols);
void printMatrix(const vector<vector<int>>& matrix, int size, int sizeRow);
void addRow(vector<vector<int>>& matrix, const vector<int>& newRow);
void deleteRow(vector<vector<int>>& matrix, int rowIndex);
void addElement(vector<vector<int>>& matrix, int rowIndex, int colIndex, int value);
void deleteElement(vector<vector<int>>& matrix, int rowIndex, int colIndex);
int check(int x, int y, int size, int sizeRow);