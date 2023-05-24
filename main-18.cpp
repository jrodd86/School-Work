#include <iostream>

using namespace std;

int main() {
double doorLength;
double doorWidth;
double windowLength;
double windowWidth;
double windowLength2;
double windowWidth2;
double bookShelfLength;
double bookShelfWidth;
double roomLength;
double roomWidth;
double roomHeight;
double paint;


cout<< "Enter door length"<<endl;
cin>> doorLength;
cout<< "Enter door width"<<endl;
cin>>doorWidth;
cout<< "Enter window length"<<endl;
cin>> windowLength;
cout<< "Enter window width"<<endl;
cin>> windowWidth;
cout<< "Enter book shelf length"<<endl;
cin>> bookShelfLength;
cout<< "Enter book shelf width"<<endl;
cin>> bookShelfWidth;
cout<< "Enter window length 2"<<endl;
cin>> windowLength2;
cout<< "Enter window width 2"<<endl;
cin>> windowWidth2;
cout<< "Enter room length"<<endl;
cin>> roomLength;
cout<< "Enter room width"<<endl;
cin>> roomWidth;
cout<< "Enter room height"<<endl;
cin>> roomHeight;

double feet=(doorLength*doorWidth)+(windowLength*windowWidth)+(windowLength2*windowWidth2)+(bookShelfLength*bookShelfWidth)+(roomLength*roomWidth*roomHeight);
paint= feet;

cout << paint; 





    return 0;
}
