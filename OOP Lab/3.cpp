//In The Name of ALLAH
#include<iostream>
using namespace std;
class item {
  int code;
  double price;
  public:
    void set(int c, double p) {
      code = c;
      price = p;
    }
  int get_c() {
    return code;

  }
  double get_p() {
    return price;
  }
};
class List {
  item lst[100];
  int tos;
  public:
    List() {
      tos = 0;
    }
  void add_item() {
    if (tos == 100) {
      cout << "Sorry the list is full." << endl;
      return;
    }
    cout << "Enter the code and price of the product: ";
    int c;
    double p;
    cin >> c >> p;
    item obj;
    obj.set(c, p);
    lst[tos] = obj;
    cout << "Item added successfully." << endl;
    tos++;
    return;
  }
  void delete_item() {
    if (tos == 0) {
      cout << "Sorry the list is empty." << endl;
      return;
    }
    cout << "Enter the code of the item you want to delete: ";
    int c;
    cin >> c;
    for (int i = 0; i < tos; i++) {
      if (lst[i].get_c() == c) {
        for (int j = i; j < tos - 1; j++) {
          lst[j] = lst[j + 1];
        }
        cout << "The item is deleted." << endl;
        tos--;
        return;
      }
    }
    cout << "Sorry the item is not in the list." << endl;
  }
  void print_value() {
    double sum = 0;
    for (int i = 0; i < tos; i++) {
      cout << "The value of item " << lst[i].get_c() << " is :" << lst[i].get_p() << endl;
      sum += lst[i].get_p();
    }
    cout << endl << endl << "The total value is: " << sum << endl;
  }
};
int main() {
  List obj;
  bool choice = true;
  cout << "Press 1 to add item to the list." << endl << "Press 2 delete item from the list." << endl << "Press 3 to see the total value." << endl << "Press any other button to exit." << endl;
  for (int i = 0; i < 10; i++) {
    int c;
    cout << "Chose an option(1-3): ";
    cin >> c;
    if (c == 1) {
      obj.add_item();
    } 
    else if (c == 2) {
      obj.delete_item();
    } 
    else if (c == 3) {
      obj.print_value();
    } 
    else break;
  }
  return 0;
}