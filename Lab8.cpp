#include <iostream>
using namespace std;

int main()
{
    int coffeeBronx = 1;
    int coffeeBrooklyn = 2;

    // Swap values
    int temp;
    temp = coffeeBronx;
    coffeeBronx = coffeeBrooklyn;
    coffeeBrooklyn = temp;

    cout << "coffeeBronx is " << coffeeBronx
    cout << " & coffeeBrooklyn is " << coffeeBrooklyn << endl;
    
    return 0;
}