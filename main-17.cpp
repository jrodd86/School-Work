#include <iostream>

using namespace std;

int main() {
double length;
const double PI=3.1416;
double radius;
double area;

cout <<"Enter the length"<<endl;
cin >> length;
radius=length/(2*PI);
area=PI*(radius*radius);
cout << radius <<endl;
cout << area <<endl;

    return 0;
}
