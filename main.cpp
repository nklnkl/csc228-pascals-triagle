#include <iostream>
#include <iomanip>
using namespace std;

int generate (int);

int main () {
  int rows;
  cout << "enter number of rows: ";
  cin >>  rows;
  generate (rows);
  return 0;
}

int generate (int rows) {
  rows --;
  int j,i,p;
  for(i = 0; i <= rows; i++) {
    p = 1;
    for( j = 0; j <= i; j++ ) {
      cout << setw(((rows) / 2) + 2) << p;
      p = p * (i - j) / (j + 1);
    }
    cout << endl;
  }
  return 0;
}
