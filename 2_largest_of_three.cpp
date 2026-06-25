#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "Enter third number: ";
    cin >> c;
    
    int largest;
    
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    
    cout << "Largest number is: " << largest << endl;
    
    return 0;
}
