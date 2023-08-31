//In The Name of ALLAH
#include<iostream>
using namespace std;
class Account {
  string name;
  string type;
  int acc_number;
  double balance;
  public:
    void set(string n, string t, int num = 0, double b = 0) {
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
    } else {
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
  Account objs[10];
  string name;
  string type;
  int tos = 10;
  cin.ignore();
  for (int i = 0; i < 10; i++) {
    cout << "Enter name of " << i + 1 << "th person: ";
    getline(cin, name);
    cout << "Chose the type of " << i + 1 << "th account: " << endl;
    cout << "1.Savings Account" << endl << "2.Student Account" << endl << "3.Business Account" << endl << "4.Trust Account" << endl;
    cout << "Chose (1-4): ";
    int n;
    cin >> n;
    if (n == 1) type = "Savings Account";
    else if (n == 2) type = "Student Account";
    else if (n == 3) type = "Business Account";
    else if (n == 4) type = "Trust Account";
    else {
      cout << "Sorry you chosed a wrong option." << endl;
      tos = i + 1;
      break;
    }
    cout << "Enter the number of " << i + 1 << "th account: ";
    int num;
    cin >> n;
    cout << "Enter the Initial balance of " << i + 1 << "th account: ";
    double balance;
    cin >> balance;
    objs[i].set(name, type, num, balance);
    cin.clear();
  }
  for (int i = 0; i < tos; i++) {
    objs[i].deposite(650.59);
    objs[i].withdraw(40);
    objs[i].display();
  }
}