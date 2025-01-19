#include <iostream>
#include <algorithm> // For sort()
using namespace std;
int main() {
int n, newValue;
// Input the size of the array
cout << "Enter the number of elements in the array: ";
cin >> n;
int arr[n + 1]; // Declare an array with one extra space for the new value
// Input the array elements
cout << "Enter " << n << " elements:\n";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
// Input the new value to be inserted
cout << "Enter the new value to insert: ";
cin >> newValue;
// Insert the new value at the end of the array
arr[n] = newValue;
// Sort the array in descending order
sort(arr, arr + n + 1, greater<int>());
// Display the sorted array
cout << "\nArray after insertion and sorting in descending order:\n";
for (int i = 0; i <= n; i++) {
cout << arr[i] << " ";
}
cout << endl;
return 0;
}