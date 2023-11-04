#include <iostream>
using namespace std;

int main() {
  cout << "Enter the tempature in fahrenheit ";
  double temp;
  cin >> temp;
  double value = (temp - 32) * 5/9;
  cout << value;
}
