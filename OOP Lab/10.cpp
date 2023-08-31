//In The Name of ALLAH
#include<iostream>
using namespace std;
class DB;
class DM {
  double meter;
  double centimeter;
  public:
    DM(double d) {
      meter = d;
      centimeter = d * 100;
    }
  friend void add_DB(DM ob, DB ob2);
  double get_total() {
    return meter;
  }
  void display() {
    cout << "Distance : " << meter << " meter\n";
    cout << "Distance: " << centimeter << " centimeter\n";
  }
};
class DB {
  double feets;
  double inches;
  public:
    DB(double d) {
      feets = d;
      inches = d * 12;
    }
  friend void add_DM(DB ob, DM ob2);
  double get_total() {
    return feets;
  }
  void display() {
    cout << "Distance: " << feets << " Feets\n";
    cout << "Distance: " << inches << " Inches\n";
  }
};
void add_DM(DB ob, DM ob2) {
  double meter_to_feet = ob2.get_total() * 3.28084;
  ob.feets += meter_to_feet;
  cout << "After adding " << ob2.get_total() << " meter total distance in feet is: " << ob.feets << endl;
}
void add_DB(DM ob, DB ob2) {
  double feet_to_meter = ob2.get_total() / 3.28084;
  ob.meter += feet_to_meter;
  cout << "After adding " << ob2.get_total() << " feet total distance in meter is: " << ob.meter << endl;
}

int main() {
  DM ob(1212);
  DB ob2(178);
  ob.display();
  ob2.display();
  add_DB(ob, ob2);
  add_DM(ob2, ob);
}