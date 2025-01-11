//
// Created by sanya on 10/10/2024.
//
#include <iostream>
using namespace std;

// No Default Argument
// double calc_cost(double base_cost, double tax_rate) {
//   return base_cost += (base_cost * tax_rate);
// }

// SIngle Default Argument
double calc_cost (double base_cost, double tax_rate = 0.06, double shipping = 3.50);
double calc_cost (double base_cost, double tax_rate, double shipping) {
  return base_cost += (base_cost * tax_rate) + shipping;
}
int main() {
  double cost{0};
  // cost = calc_cost(100.0,1.0);
  // cout << cost << endl;
  cost = calc_cost(1000,0.08,4.26);
  cout << cost << endl;
  return 0;
}
// Here calc_cost() function is overloaded
