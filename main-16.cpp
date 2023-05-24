#include <iostream>

using namespace std;

int main() {
int number_of_Quarters;
int number_of_Dimes;
int number_of_Nickels;

cout <<"Enter the number of Quarters"<<endl;
cin >> number_of_Quarters;
cout <<"Enter the number of Dimes"<<endl;
cin >> number_of_Dimes;
cout <<"Enter the number of Nickels"<<endl;
cin >> number_of_Nickels;


double convert_Quarters= number_of_Quarters*0.25;
double convert_Dimes= number_of_Dimes*0.10;
double convert_Nickels= number_of_Nickels*0.05;
double total=convert_Quarters+convert_Dimes+convert_Nickels;
double output= total/0.01;

cout << output;

    return 0;
}
