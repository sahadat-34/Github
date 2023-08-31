//In The Name of ALLAH
#include<iostream>
using namespace std;
const int N = 1e5 + 5, inf = 1e9;
double power(double m, int n = 2) {
  return pow(m, n);
}
int main() {
  double m;
  int n;
  cout << "Enter the value of m: ";
  cin >> m;
  cout << "Enter the value of n: ";
  cin >> n;
  double result = power(m, n);
  cout << "The result is: " << result << endl;
}