//In The Name of ALLAH
#include<iostream>
#include <math.h>
using namespace std; 
class deposit {
  double p_amount;
  int period;
  double interest_rate;
  double return_value;
  public:
    deposit(double p, int y, double r) {
      p_amount = p;
      period = y;7
      interest_rate = r;

    }
  void show() {
    cout << "Principal amount: " << p_amount << " Taka" << endl;
    cout << "Return value after " << period << " years: " << return_value << " Taka" << endl;

  }
  void calculate() {
    double rate = interest_rate / 100;
    double compound_profit = p_amount * pow(1 + rate, period) - p_amount;
    return_value = compound_profit + p_amount;
  }
};
int main() {
  double a;
  int b;
  double c;
  cout << "Enter Princpal amount, period (in year) and interest rate(in percentage) respectively: ";
  cin >> a >> b >> c;
  deposit ob1(a, b, c);
  ob1.calculate();
  ob1.show();
}