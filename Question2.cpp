#include <iostream>

using namespace std;

int main() {
    double** dynamicArray=nullptr;
  int rows, cols;

  
  do {
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
  } while (rows <= 0 || rows > 3);

  do {
    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
  } while (cols <= 0 || cols > 3);

  // Dynamically allocate memory for the 2D array
  dynamicArray = new double*[rows];
  for (int i = 0; i < rows; ++i) {
    dynamicArray[i] = new double[cols];
  }

  // Assign values to each element using nested loops
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
      cin >> dynamicArray[i][j];
    }
  }

  // Output the values of each element
  cout << "\nThe array elements:\n";
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << dynamicArray[i][j] << " ";
    }
    cout << endl;
  }

  // Deallocate memory to prevent leaks
  for (int i = 0; i < rows; ++i) {
    delete[] dynamicArray[i];
  }
  delete[] dynamicArray;

  return 0;
}