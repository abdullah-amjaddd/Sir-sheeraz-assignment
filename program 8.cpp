#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;
int main() {
int n;
// Input the size of the arrays
cout << "Enter the number of elements in each array: ";
cin >> n;
int arr1[n], arr2[n];
vector<int> mergedArray;
// Input elements of the first array
cout << "Enter elements of the first array:\n";
for (int i = 0; i < n; i++) {
cin >> arr1[i];
mergedArray.push_back(arr1[i]); // Add to merged array
}
// Input elements of the second array
cout << "Enter elements of the second array:\n";
for (int i = 0; i < n; i++) {
cin >> arr2[i];
mergedArray.push_back(arr2[i]); // Add to merged array
}
// Sort the merged array in descending order
sort(mergedArray.begin(), mergedArray.end(), greater<int>());
// Display the merged and sorted array
cout << "\nMerged array in descending order:\n";
for (int num : mergedArray) {
cout << num << " ";
}
cout << endl;
// Count duplicates
int duplicateCount = 0;
for (int i = 0; i < mergedArray.size() - 1; i++) {
if (mergedArray[i] == mergedArray[i + 1]) {
duplicateCount++;
}
}
// Display the count of duplicates
cout << "\nTotal number of duplicate elements found: " << duplicateCount << endl;
return 0;
}