#include <iostream>
using namespace std;

int main() {
    char strng[20];
    
    // Input character array from the user
    cout << "Enter a character array (up to 19 characters): ";
    cin >> strng;

    // Check if there is a null terminator within the array
    bool isString = false;
    for (int i = 0; i < 20; i++) {
        if (strng[i] == '\0') {
            isString = true;
            break;
        }
    }