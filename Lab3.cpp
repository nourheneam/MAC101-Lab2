#include <iostream>
using namespace std;

int main() {
    int credits;
    double gpa;
    int holds;
    int courseReq;

    // Input
    cout << "Enter total credits: ";
    cin >> credits;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter number of holds: ";
    cin >> holds;

    cout << "Enter remaining required courses: ";
    cin >> courseReq;

    // Check graduation eligibility
    if (credits >= 60 && gpa >= 2.0 && holds == 0 && courseReq == 0) {
        cout << "Eligible to graduate" << endl;
    } else {
        cout << "Not Eligible to Graduate" << endl;
    }

    return 0;
}