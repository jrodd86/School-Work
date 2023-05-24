#include <iostream>

using namespace std;

int main() {
int seconds;
int hours;
int minutes;

cout <<"Enter seconds"<<endl;
cin >> seconds;

minutes= seconds/60;
hours= minutes/60;
minutes= 160-(hours*60);
seconds= seconds-((hours*3600)+(minutes*60));
cout << hours<< ":"<< minutes << ":"<< seconds<<endl;

    return 0;
}
