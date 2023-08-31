//In The Name of ALLAH
#include<iostream>
using namespace std;
class Book {
  string author;
  string title;
  double price;
  int copies;
  public:
    void set(string a, string t, double p, int c) {
      author = a;
      title = t;
      price = p;
      copies = c;
    }
  string get_auth() {
    return author;
  }
  string get_title() {
    return title;
  }
  double get_price() {
    return price;
  }
  int get_copies() {
    return copies;
  }
  void set_copy(int c) {
    copies = c;
  }
};
class Shop {
  Book * List;
  int tos;
  int Size;
  public:
    Shop(int sz = 0) {
      List = new Book[sz];
      tos = 0;
      Size = sz;
    }
  void add_book() {
    if (tos == Size) {
      cout << "Sorry! There is no space available in the shop." << endl;
      return;
    }
    cout << "Enter book details.\n";
    string auth;
    string title;
    cout << "Author: ";
    getline(cin, auth);
    cout << "Title: ";
    getline(cin, title);
    double price;
    cout << "Price: ";
    cin >> price;
    int copies;
    cout << "Number of copy: ";
    cin >> copies;
    Book obj;
    obj.set(auth, title, price, copies);
    List[tos] = obj;
    tos++;
    cin.clear();
  }
  void sell_book() {
    if (tos == 0) {
      cout << "Sorry! There is no book available." << endl;
      return;
    }
    cout << "Enter the book title: ";
    string title;
    getline(cin, title);
    cout << "Enter the author name: ";
    string auth;
    getline(cin, auth);
    for (int i = 0; i < tos; i++) {
      if ((auth == List[i].get_auth()) && (title == List[i].get_title())) {
        cout << "There are " << List[i].get_copies() << " copies available of this book. \n";
        cout << "Price of each copy is: " << List[i].get_price() << " Taka.\n";
        cout << "Enter number of copy: ";
        int c;
        cin >> c;
        if (c > List[i].get_copies()) {
          cout << "Sorry! There are " << List[i].get_copies() << " copies available.\n";
          break;
        } else {
          double total = (double) c * List[i].get_price();
          cout << "Total price: " << total << " Taka.\n";
          if (List[i].get_copies() - c == 0) {
            tos--;
          }
          List[i].set_copy(List[i].get_copies() - c);
          break;
        }
      }
    }
  }
};
int main() {
  Shop objs(4);
  for (int i = 0; i < 4; i++) {
    objs.add_book();
  }
  bool choice = true;
  while (choice) {
    cout << "Enter 1 to buy book or any other button to exit: ";
    int n;
    cin >> n;
    if (n == 1) {
      objs.sell_book();
    }
   else break;
  }
}