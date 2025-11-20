#include <iostream>
#include <string>
using namespace std;

int main() {
    string temp;
    cin >> temp;

    if (temp == "39F") {
        cout << "22C";
    }
    else if (temp == "50F") {
        cout << "10C";
    }
    else if (temp == "68F") {
        cout << "20C";
    }
    else if (temp == "77F") {
        cout << "25C";
    }
    else if (temp == "104F") {
        cout << "40C";
    }
    else {
        cout << "Unknown";
    }

    return 0;
}