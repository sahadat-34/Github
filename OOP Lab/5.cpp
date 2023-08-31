//In The Name of ALLAH
#include<iostream>
using namespace std;
class Time {
  int hour;
  int minute;
  double total;
  public:
    Time(int h = 0, int m = 0) {
      hour = h;
      minute = m;
      total = h + m / 60 + (double(m % 60) / 100);

    }
  void sum(Time ob1, Time ob2) {
    total = ob1.hour + ob2.hour;
    total += (ob1.minute + ob2.minute) / 60;
    total += (double)((ob1.minute + ob2.minute) % 60) / 100;
  }
  void display() {
    cout << "Time: " << total << endl;
  }
};
int main() {
  Time t1(3, 32), t2(4, 52), t3;
  t3.sum(t1, t2);
  t3.display();
}