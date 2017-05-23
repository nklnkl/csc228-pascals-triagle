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


int generate (int n) {
  int i, j;
  int x;
  for(i = 0; i < n; i++) {
    x = 1;
    for (j = 0; j < (n-i); j++) {
      cout << " ";
    }
    for( int k = 0; k <= i; k++ ) {
      //cout << i << endl;
      cout << " " << x;
      x = x * (i - k) / (k + 1);
    }
    cout << endl;
  }
  return 0;
}
