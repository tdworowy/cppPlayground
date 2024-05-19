#include <iostream>

int main() {
  using namespace std;
  cout.setf(ios_base::fixed, ios_base::floatfield);
  float tub = 10.0 / 3.0;
  double mint = 10.0 / 3.0;
  const float milion = 1.0e6;

  cout << "tub = " << tub << endl;
  cout << "milion * tub = " << milion * tub << endl;
  cout << "10 milions * tub = " << 10 * milion * tub << endl;
  cout << "mint = " << mint << endl;
  cout << "milion * mint = " << milion * mint << endl;
}