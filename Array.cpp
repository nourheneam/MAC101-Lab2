#include <iostream>
using namespace std;

int main() {
    string sevenTrain[] = {
        "34 St - Hudson Yards",
        "Times Sq - 42 St",
        "5 Av",
        "Grand Central - 42 St",
        "Vernon Blvd - Jackson Av",
        "Hunters Point Av",
        "Court Sq",
        "Queensboro Plaza",
        "33 St - Rawson St",
        "40 St - Lowery St",
        "46 St - Bliss St",
        "52 St",
        "61 St - Woodside",
        "69 St",
        "74 St - Broadway",
        "82 St - Jackson Heights",
        "90 St - Elmhurst Av",
        "Junction Blvd",
        "103 St - Corona Plaza",
        "111 St",
        "Mets - Willets Point",
        "Flushing Main St"
    };

    int numberOfStops = sizeof(sevenTrain) / sizeof(sevenTrain[0]);

    for (int i = 0; i < numberOfStops; i++) {
        cout << "Now arriving at: " << sevenTrain[i] << endl;
    }

    return 0;
}