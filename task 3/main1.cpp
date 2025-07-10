#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter the grade: ";
    cin >> grade;

    if (grade >= 85) {
        cout << "Grade: A" << endl;
    } else if (grade >= 75) {
        cout << "Grade: B" << endl;
    } else if (grade >= 65) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: D" << endl;
    }

    return 0;
}
