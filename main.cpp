#include <iostream>

using namespace std;

int main(){
  int baris;
  int kolom;

  cout << "masukan input baris : ";
  cin >> baris;

  cout << "masukan input kolom : ";
  cin >> kolom;

for (int i = 1; i <= kolom; i++){
  for (int j = 1; j <= baris; j++){
    if (j % 2 == 1){
      cout << "x ";
    }
    else {
      cout << "o ";
    }
  }
  cout << endl;
}

  return 0;
}