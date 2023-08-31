//In The Name of ALLAH
#include<iostream>
using namespace std;
class student {
  protected: 
    int roll;
  public: 
    student(int r) {
    roll = r;
  }
};
class test: public student {
  protected: 
    double eng_score;
    double bang_score;
  public: 
    test(int r, double e, double b): student(r) {
    eng_score = e;
    bang_score = b;
  }
};
class result: public test {
  double total;
  public:
    result(int r, double e, double b): test(r, e, b) {
      total = 0;
    }
  void display() {
    total = eng_score + bang_score;
    cout << "Roll: " << roll << endl;
    cout << "Marks of Bangla: " << bang_score << endl;
    cout << "Marks of English: " << eng_score << endl;
    cout << "Total marks: " << total << endl;
  }
};
int main() {
  result ob1(101, 75.54, 86.56);
  ob1.display();
}