//In The Name of ALLAH
#include<iostream>
using namespace std;
class Student {
  int roll;
  double grade;
  string name;
  public:
    void set(int r, double g, string n) {
      roll = r;
      grade = g;
      name = n;
    }
  void display() {
    cout << "Name: " << name << endl << "Roll: " << roll << endl << "Grade: " << grade << endl;
  }
};
int main() {
  Student objs[3];
  for (int i = 0; i < 3; i++) {
    cout << "Enter the name of " << i + 1 << "th student: ";
    string name;
    cin >> name;
    cout << "Enter the roll of " << i + 1 << "th student: ";
    int r;
    cin >> r;
    cout << "Enter the grade of " << i + 1 << "th student: ";
    double g;
    cin >> g;
    objs[i].set(r, g, name);
  }
  for (int i = 0; i < 3; i++) {
    cout << "Details of " << i + 1 << "th student: " << endl;
    objs[i].display();
  }
}