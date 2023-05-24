#include <iostream>
#include <cmath>
using namespace std;

int main() {
double total;
double cost;
double profit;
double milkCost;
double milkProfit;
int cartonsNeeded;

cout << "Enter the total amount produced"<<endl;
cin >> total;
cout << "Enter the cost of producing milk"<<endl;
cin >> cost;
cout << "Enter the profit on each carton"<<endl;
cin >> profit;

cartonsNeeded= round(total/3.78);
milkCost= total*cost;
milkProfit= cartonsNeeded*profit;

cout << cartonsNeeded <<endl;
cout << milkCost <<endl;
cout << milkProfit <<endl;

    return 0;
}
