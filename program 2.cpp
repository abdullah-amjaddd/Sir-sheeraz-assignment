#include <iostream>
using namespace std;
int main() {
int start, end, product = 1;
    // Input the starting and ending numbers
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    // Ensure the starting number is less than the ending number
    if (start > end) {
    cout << "Starting number should be less than the ending number." << endl;
    return 0;
    }
    // Display even numbers
    cout << "Even numbers between " << start << " and " << end << " are:\n";
    for (int i = start; i <= end; i++) {
    if (i % 2 == 0) {
    cout << i;
    if (i < end - 1 || (i == end - 1 && end % 2 == 0)) {
    cout << ", ";
    }
    }
    }
    cout << endl;
    // Calculate the product of odd numbers
    cout << "Product of odd numbers: ";
    bool first = true;
    for (int i = start; i <= end; i++) {
    if (i % 2 != 0) {
    product *= i;
    if (!first) {
    cout << "*";
    }
    cout << i;
    first = false;
    }
    }
    cout << " = " << product << endl;
    return 0;
}