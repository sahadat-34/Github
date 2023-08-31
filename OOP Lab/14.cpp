//In The Name of ALLAH
#include<iostream>
using namespace std;
class Complex {
  int real, imaginary;
  public:
    Complex(int x = 0, int y = 0) {
      real = x;
      imaginary = y;
    }
  void get_constant_coefficient(int & x, int & y) {
    x = real;
    y = imaginary;
  }
  Complex operator + (Complex ob2) {
    Complex temp;
    temp.real = real + ob2.real;
    temp.imaginary = imaginary + ob2.imaginary;
    return temp;
  }
  Complex operator - (Complex ob2) {
    Complex temp;
    temp.real = real - ob2.real;
    temp.imaginary = imaginary - ob2.imaginary;
    return temp;
  }
  void operator = (Complex ob2) {
    real = ob2.real;
    imaginary = ob2.imaginary;
  }
};
int main() {
  Complex ob1(4, 3), ob2(8, 6), ob3;
  ob3 = ob1 + ob2;
  int x, y;
  ob3.get_constant_coefficient(x, y);
  cout << "Complex number after addition: " << x << " + j" << y << " " << endl;
  ob3 = ob2 - ob1;
  ob3.get_constant_coefficient(x, y);
  cout << "Complex number after subtraction: " << x << " + j" << y << " " << endl;
  ob3 = ob2;
  ob3.get_constant_coefficient(x, y);
  cout << "Complex number after asigning: " << x << " + j" << y << " " << endl;

}