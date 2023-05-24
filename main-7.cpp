#include <iostream>
#include <string>

using namespace std;



int main()
{
string name;
double studyHours;

cout << "enter a value for name" <<endl;
cin >> name;
cout << endl;
cout << "enter a value for studyHours" <<endl;
cin >> studyHours;


cout << "Hello, "<< name << "!  On Saturday, you need to study " << studyHours<<" hours" <<endl;

return 0;
}
