#include <iostream>
using namespace std;

int main () {
int age;

cout <<"Enter your age :";
cin >>age;

switch (age >=18) {
case 1:
cout <<"You are eligible for vote." <<endl;

break;
case 2 :
cout << "You are not eligible "<<endl;
break;
}
  return 0;

}
