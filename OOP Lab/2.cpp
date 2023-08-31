//In The Name of ALLAH
#include<iostream>
using namespace std;
inline int largest(int a, int b, int c) {
  if (a >= b && a >= c) return a;
  else if (b >= a && b >= c) return b;
  else return c;
}
int main() {
  int a, b, c;
  cout << "Enter the values of a, b and c respectively: ";
  cin >> a >> b >> c;
  int x = largest(a, b, c);
  cout << "The largest number is: " << x << endl;
}