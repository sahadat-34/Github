//In The Name of ALLAH
#include<iostream>
using namespace std;
class Account {
  string name;
  string type;
  int acc_number;
  double balance;
  public:
    Account(string n, string t, int num = 0, double b = 0) {
      name = n;
      type = t;
      acc_number = num,
      balance = b;
    }
  void deposite(double amount = 0) {
    balance += amount;
    cout << "Taka " << amount << " added to your account successfully." << endl;
  }
  void check_balance() {
    cout << "You have " << balance << " Taka in your account." << endl;
  }
  void withdraw(double amount) {
    if (amount > balance) {
      cout << "Sorry you do not have sufficient amount to wthdraw." << endl;
      check_balance();
    } 
    else {
      balance -= amount;
      cout << "Taka " << amount << " withdrawn successfully. Now ";
      check_balance();
    }
  }
  void display() {
    cout << "Name: " << name << endl << "Balance: " << balance << endl;
  }
};
int main() {
  //start your code from here
  string name = "Sahadat Hossain";
  string type = "Savings";
  Account obj(name, type, 11001, 500);
  obj.deposite(650.59);
  obj.withdraw(40);
  obj.display();
}