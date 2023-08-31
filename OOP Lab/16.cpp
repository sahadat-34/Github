//In The Name of ALLAH
#include<iostream>
using namespace std;
class account {
  protected: 
  string name;
  string typ_acc;
  double balance;
  long acc_num;
  public: 
    account(string n, long ac, string tp, double b) {
    name = n;
    acc_num = ac;
    typ_acc = tp;
    balance = b;
  }
  void withdraw(double amount);
  void calculate_interest(double amount);
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Amount Depositted Successfully" << "\n";
      cout << "New balance: " << balance << "Taka" << "\n";
    } 
    else {
      cout << "Sorry! you entered an invalid amount." << "\n";
    }
  }
  void display() {
    cout << "Account Holder Name: " << name << "\n";
    cout << "Account Number : " << acc_num << "\n";
    cout << "Account Type: " << typ_acc << "\n";
    cout << "Balance: " << balance << "\n";
  }
};
class Savings_account: public account {
  public: Savings_account(string a, long b, double d): account(a, b, "savings", d) {}
  void calculate_interest() {
    double interest_rate = 0.1;
    double interest_amount = interest_rate * balance;
    balance += interest_amount;
    cout << "New balance after adding interest: " << balance << "\n";
  }
  void withdraw(double amount) {
    if (balance >= amount) {
      balance -= amount;
      cout << "Withdrawl is succesful.\nNew balance: " << balance << " Taka" << "\n";
    } 
    else {
      cout << "Sorry! your account balance is not sufficient." << "\n";
    }
  }
};

class Current_Account: public account {
  double minimum_balance = 500;
  public:
    Current_Account(string n, long b, double d): account(n, b, "current", d) {}
  void withdraw(double amount) {
    if (balance >= amount) {
      balance -= amount;
      cout << "Withdrawl is succesful . Your new balance is : " << balance << "Taka" << "\n";
      if (balance < minimum_balance) {
        balance -= 10;
        cout << "After the withdrawl your balance is less than 500 taka." << "\n";
        cout << "Your new balance after penalty: " << balance << " taka" << "\n";
      }
    } 
    else {
      cout << "You don't have enough money in your account." << "\n";
      if (balance < minimum_balance) {
        balance -= 10;
        cout << "Your balance is less than 500 taka." << "\n";
        cout << "Your new balance after penalty: " << balance << " taka" << "\n";
      }
    }
  }
};
int main() {
  Current_Account ob1("Sahadat Hossain", 1101, 10);
  ob1.deposit(600);
  ob1.display();
  ob1.withdraw(500);
  cout << "\n";

  Savings_account ob2("Riham", 1102, 200);

  ob2.deposit(600);
  ob2.calculate_interest();
  ob2.withdraw(500);
  ob2.display();
}