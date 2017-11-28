#include <iostream>

using namespace std;

float getAverage(int panjang);

int main()
{
  int panjang = 0;
  cout << "Masukkan Panjang Fibbonaci = ";
  cin >> panjang;

  cout << "Rata-Ratanya = " << getAverage(panjang);
}

float getAverage(int panjang)
{
  int awal = 0, akhir = 1, fibbo = 0, jumlah = 0;

  if (panjang != 0) {
    cout << "1 " << endl;
    jumlah += 1;
  }

  for (int i = 1; i < panjang; i++) {
    fibbo = awal + akhir;
    jumlah += fibbo;
    cout << fibbo << endl;

    awal = akhir;
    akhir = fibbo;
  }

  return jumlah / panjang;
}
