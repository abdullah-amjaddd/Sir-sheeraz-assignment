#include <iostream>
using namespace std;
int main() {
int n;
// Input the number of elements
cout << "Enter the number of elements: ";
cin >> n;
int arr1[n], arr2[n], evenSum = 0;
// Input elements and process them

for (int i = 0; i < n; i++) {
cin >> arr1[i];
arr2[i] = arr1[i]; // Copy to the second array
if (arr1[i] % 2 == 0) {
evenSum += arr1[i]; // Add to even sum if the number is even
}
}
// Output the copied array
cout << "\nCopied array:\n";
for (int i = 0; i < n; i++) {
cout << "Element "<< ": " << arr2[i] << endl;
}
// Output the sum of even numbers
cout << "\nSum of even numbers: " << evenSum << endl;
return 0;
}