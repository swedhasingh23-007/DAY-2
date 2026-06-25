#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << num << " is EVEN" << endl;
    } else {
        cout << num << " is ODD" << endl;
    }
    
    return 0;
}
