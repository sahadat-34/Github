//In The Name of ALLAH
#include<iostream>
using namespace std;
class Vector {
  float * vec;
  int tos;
  int Size;
  public:
    Vector(int sz = 0) {
      tos = 0;
      Size = sz;
      vec = new float[sz];
    }
  void set_values() {
    cout << "Enter values of the vector: ";
    for (int i = 0; i < Size; i++)
      cin >> vec[i];
  }
  void modify(int idx, float new_val) {
    if (idx < Size && idx > 0) {
      vec[idx - 1] = new_val;
      cout << "Modification successful." << endl;
      return;
    }
    cout << "Invalid index." << endl;
  }
  void multiply(float scaler) {
    for (int i = 0; i < Size; i++)
      vec[i] *= scaler;
  }

  void display() {
    cout << "The elements of the vector: (";
    for (int i = 0; i < Size; i++) {
      cout << " " << vec[i];
      if (i < Size - 1) cout << ", ";
      else cout << " ";
    }
    cout << ")" << endl;
  }
  void vector_addition(Vector v1, Vector v2) {
    Size = max(v1.Size, v2.Size);
    vec = new float[Size];
    int i = 0;
    for (i = 0; i < min(v1.Size, v2.Size); i++) {
      vec[i] = v1.vec[i] + v2.vec[i];
    }
    if (i < Size) {
      if (Size == v1.Size) {
        while (i < Size) {
          vec[i] = v1.vec[i];
          i++;
        }
      } 
      else {
        while (i < Size) {
          vec[i] = v2.vec[i];
        }

      }
    }
    cout << "After adding two vector ";
    cout << "The elements of the vector: (";
    for (int i = 0; i < Size; i++) {
      cout << " " << vec[i];
      if (i < Size - 1) cout << ", ";
      else cout << " ";
    }
    cout << ")" << endl;
  }
};
int main() {
  Vector v(10), v2(5);
  v.set_values();
  v.modify(3, 50.5);
  v.multiply(5.5);
  v2.set_values();
  Vector v3;
  v3.vector_addition(v, v2);
}