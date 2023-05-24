#include <iostream>

using namespace std;

int main() {
int cookies=24;
int boxes=75;
int cookieAmount;
int neededBoxes;
int neededContainers;

cout <<"Enter the amount of cookies"<<endl;
cin >> cookieAmount;
neededBoxes=cookieAmount/cookies;
neededContainers=neededBoxes/boxes;
cout << neededBoxes <<endl;
cout << cookieAmount%cookies <<endl;
cout << neededContainers <<endl;
cout << neededBoxes%boxes <<endl;


    return 0;
}
