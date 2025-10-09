#include <iostream>
using namespace std;
int main() {
    int credits, holds, courseReq;
    double gpa;
    cout << "Enter credits:";
    cin >> credits;
    cout << "Enter GPA:";
    cin >> gpa;
    cout << "Enter number of holds";
    cin >> holds;
    cout << "Enter remaining course requirements:";
    cin >> courseReq
    if (credits >= 60 && gpa >= 2.0 && holds == 0 && courseReq == 0) 
    { cout << "Eligible to graduate." endl; }
    else { cout << "You are not eligible to graduate." endl;}
    return0; 
}