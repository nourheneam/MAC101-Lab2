#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string name;
    int score;

    // Step 1: Write to file
    ofstream outFile("students.txt");

    if (!outFile) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    for (int i = 1; i <= 5; i++) {
        cout << "Enter student name" << i << ": ";
        cin >> name;

        cout << "Enter score: ";
        cin >> score;

        outFile << name << " " << score << endl;
    }

    outFile.close();

    // Step 2: Read from file
    ifstream inFile("students.txt");

    if (!inFile) {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\nStudent Data from File:\n";

    while (inFile >> name >> score) {
        cout << "Name: " << name << ", Score: " << score << endl;
    }

    inFile.close();

    return 0;
}