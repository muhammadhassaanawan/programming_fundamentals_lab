 #include <iostream>
using namespace std;

int main() {
    char symbol;
    int rows;

    while (true) {
        cout << "Enter a symbol (or 'q' to quit): ";
        cin >> symbol;
        if (symbol == 'q') break;

        cout << "Enter the number of rows: ";
        cin >> rows;

        if (rows < 1) {
            cout << "Enter a positive integer." << endl;
            continue;
        }

        
        for (int i = 1; i <= rows; ++i) {
            for (int j = 0; j < i; ++j) {
                cout << symbol;
            }
            cout << endl;  
        }
        for (int i = rows - 1; i > 0; --i) {
            for (int j = 0; j < i; ++j) {
                cout << symbol;
            }
            cout << endl;  
        }
    }

    return 0;
}
