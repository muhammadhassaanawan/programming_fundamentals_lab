#include <iostream>

using namespace std;

int main()
{
    float magnitude;
    cout << "Enter Magnitude = ";
    cin >> magnitude;

 float ranges[] = {2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 10.0};
    string categories[] = {
        "Micro Earthquake",
        "Very Minor Earthquake",
        "Minor Earthquake",
        "Light Earthquake",
        "Moderate Earthquake",
        "Strong Earthquake",
        "Major Earthquake",
        "Great Earthquake"
  };
for (int i = 0; i < 8; i++)
    {
        if (magnitude < ranges[i])
        {
            cout << "The  Magnitude " << magnitude << " earthquake is considered to be a " << categories[i] << "." << endl;
            return 0;
        }
    }

    // If no match is found, it is a Meteoric Earthquake
    cout << "THe  Magnitude " << magnitude << " earthquake is considered to be a Meteoric Earthquake." << endl;

return 0;
}