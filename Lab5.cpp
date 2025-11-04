#include <iostream>
using namespace std;

int main() {
    const double FULL_FARE = 2.90;
    const double HALF_FARE = 1.45;
    const double JUMP_FARE = 0.00;

    int totalRiders = 100000;
    double totalRevenue = 0.0;
    
    for (int swipe = 1; swipe <= totalRiders; swipe++) {
        if (swipe % 3 == 0) {
            totalRevenue += JUMP_FARE;
        }
        else if (swipe % 5 == 0) {
            totalRevenue += HALF_FARE;
        }
        else {
            totalRevenue += FULL_FARE;
        }
    }

    cout << "Total Revenue: $" << totalRevenue << endl;
    return 0;
}