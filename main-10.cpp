#include <iostream>

using namespace std;

int main() {
double testScore1;
double testScore2;
double testScore3;
double testScore4;
double testScore5;

cout << "Enter testScore1"<<endl;
cin >> testScore1;
cout << "Enter testScore2"<<endl;
cin >> testScore2;
cout << "Enter testScore3"<<endl;
cin >> testScore3;
cout << "Enter testScore4"<<endl;
cin >> testScore4;
cout << "Enter testScore5"<<endl;
cin >> testScore5;

double average=(testScore1+testScore2+testScore3+testScore4+testScore5)/5;
cout << "Your average test score is: "<< average<<endl;

    return 0;
}
