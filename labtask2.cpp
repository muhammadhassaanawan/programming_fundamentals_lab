#include <iostream>

using namespace std;

int main() {
    

    
    double slope, yIntercept;
    cout << "Please enter the slope (m): ";
    cin >> slope;

    cout << "Now, enter the y-intercept (b): ";
    cin >> yIntercept;

    
    int startX, endX;
    cout << "Let's decide the range for x. What should be the starting value of x? ";
    cin >> startX;

    cout << "And what should be the ending value of x? ";
    cin >> endX;

    
    cout << "Here are the points on the line (x, y):\n";
    
    for (int x = startX; x <= endX; x++) {
        double y = slope * x + yIntercept; 
        cout << "(" << x << " , " << y << ")\n";
    }

   

    return 0;
}
