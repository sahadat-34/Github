//In The Name of ALLAH
#include<iostream>
using namespace std;
class Coord {
  int X, Y;
  public:
    Coord(int x = 0, int y = 0) {
      X = x;
      Y = y;
    }
  void get_coord(int & x, int & y) {
    x = X;
    y = Y;
  }
  Coord operator + (Coord ob2) {
    Coord temp;
    temp.X = X + ob2.X;
    temp.Y = Y + ob2.Y;
    return temp;
  }
  Coord operator - (Coord ob2) {
    Coord temp;
    temp.X = X - ob2.X;
    temp.Y = Y - ob2.Y;
    return temp;
  }
  void operator = (Coord ob2) {
    X = ob2.X;
    Y = ob2.Y;
    
  }
};
int main() {
  Coord ob1(4, 3), ob2(8, 6), ob3;
  ob3 = ob1 + ob2;
  int x, y;
  ob3.get_coord(x, y);
  cout << "Coordinate after addition: " << "(x,y) = " << "( " << x << " , " << y << " )" << endl;
  ob3 = ob1 - ob2;
  ob3.get_coord(x, y);
  cout << "Coordinate after subtraction: " << "(x,y) = " << "( " << x << " , " << y << " )" << endl;
  ob3 = ob2;
  ob3.get_coord(x, y);
  cout << "Coordinate after asigning: " << "(x,y) = " << "( " << x << " , " << y << " )" << endl;

}