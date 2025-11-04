#include <iostream>
using namespace std;

int main() {
    int street;
    cout << "Enter the street number: ";
    cin >> street;

    cout << endl;

    if (street >= 190 && street <= 207) {
        cout << "You are in Inwood / Washington Heights!" << endl;
        cout << "This area is in the northern part of Manhattan.\n";
    }
    else if (street >= 155 && street <190) {
        cout << "You are in Upper Manhattan!" << endl;
    }
    else if (street >= 145 && street < 155) {
        cout << "You are in Harlem!" << endl;
        cout << "Fun fact: Harlem is known for its cultural and music history.\n";
    }
    else if (street >= 59 && street < 90) {
        cout << "You are in Midtown Manhattan (Hell's Kitchen / Midtown West)!" << endl;
    }
    else if (street >= 14 && street < 59) {
        cout << "You are in Chelsea or Greenwich Village!" << endl;
        cout << "Fun spot here is Chelsea's Dallas BBQ - great place to eat!\n";
    }
    else if (street < 14 && street >= 1) {
        cout << "You are in Lower Manhattan (SoHo / Financial District)!" << endl;
    }
    else {
        cout << "The train doesn't go that far - probably upstate NY!" << endl;
    }
    return 0;
}