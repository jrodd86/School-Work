#include <iostream>
#include <iomanip>

using namespace std;

int main() {
float weight_kg, weight_lb;
    cout << "Enter weight in kilograms: ";
    cin >> weight_kg;
    weight_lb = weight_kg * 2.2;
    cout << "Weight in pounds: " << fixed << setprecision(2) << weight_lb << endl;
    return 0;
}
