#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0) {
        cout << num << " is POSITIVE" << endl;
    } else if (num < 0) {
        cout << num << " is NEGATIVE" << endl;
    } else {
        cout << num << " is ZERO" << endl;
    }
    
    return 0;
}
