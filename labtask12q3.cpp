#include <iostream>
using namespace std;

int calculateArea(int radius) {
    const int PI = 3.14579; 
    return PI * radius * radius;
}

int calculateArea(int length, int width) {
    return length * width;
}

int calculateArea(int base, int height, int isTriangle) {
    if (isTriangle) { 
        return (base * height) / 2; 
    }
    return 0;
}

int main() {
    int choice;
    cout << "Choose a shape to calculate the area:\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        int radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of the circle: " << calculateArea(radius) << endl;
    } 
    else if (choice == 2) {
        int length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of the rectangle: " << calculateArea(length, width) << endl;
    } 
    else if (choice == 3) {
        int base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of the triangle: " << calculateArea(base, height, true) << endl;
    } 
    else {
        cout << "Invalid choice. Please run the program again and select a valid option." << endl;
    }

    return 0;
}
