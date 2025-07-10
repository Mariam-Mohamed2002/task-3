#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;

    if (N > 5) {
        cout << "Greater than 5" << endl;
    } else if (N < 5) {
        cout << "Less than 5" << endl;
    } else {
        cout << "Equal to 5" << endl;
    }

    return 0;
}
