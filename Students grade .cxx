#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your exam score: ";
    cin >> score;
    if (score > 95) {
        cout << "Your grade is an A+." << endl;
    } else if (score >= 85 && score <= 94) {
        cout << "Your grade is an A." << endl;
    } else if (score >= 80 && score <= 84) {
        cout << "Your grade is an A-." << endl;
    } else if (score >= 75 && score <= 79) {
        cout << "Your grade is a B+." << endl;
    } else if (score >= 70 && score <= 74) {
        cout << "Your grade is a B." << endl;
    } else if (score >= 65 && score <= 69) {
        cout << "Your grade is a B-." << endl;
    } else if (score >= 60 && score <= 64) {
        cout << "Your grade is a C+." << endl;
    } else if (score >= 50 && score <= 59) {
        cout << "Your grade is a C." << endl;
    } else {
        cout << "Your grade is an F." << endl;
    }
    return 0;
}