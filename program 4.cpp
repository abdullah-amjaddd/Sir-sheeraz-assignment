#include <iostream>
using namespace std;
int main() {
int rows;
// Input the number of rows
cout << "Input number of rows: ";
cin >> rows;
int i = 1; // Row counter
// Outer loop to iterate through each row
while (i <= rows) {
int j = 1; // Column counter
// Inner loop to print the current row's number
while (j <= i) {
cout << i; // Print the row number
j++;
}
cout << endl; // Move to the next line after printing a row
i++;
}
return 0;
}