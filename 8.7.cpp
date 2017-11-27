#include <iostream>

using namespace std;

void isPrima(int panjang);

int main()
{
  int panjang = 0;
  cout << "Masukkan Panjang Bilangan Prima = ";
  cin >> panjang;

  isPrima(panjang);
}

void isPrima(int panjang)
{
  int batas = 0, bil = 1, prima[panjang], jumBagi = 0;

  while (batas < panjang) {
    jumBagi = 0;

    for (int i = 1; i <= bil; i++) {
      if (bil % i == 0) {
        jumBagi++;
      }
    }

    if (jumBagi == 2) {
      prima[batas] = bil;
      batas++;
    }

    bil++;
  }

  cout << "Bilangan Prima = " << endl;
  for (int i = 0; i < panjang; i++) {
     cout << prima[i] << endl;
  }
}
