#include <iostream>
using namespace std;
 
main()
{
	int terbesar, terkecil, angka[10];
	
	for(int i=1; i<=10; i++){
		cout<< "Tulis Angka Ke" <<i <<":";
		cin>> angka [i];
		
		if(i == 0) {
			terbesar = angka [0];
			terkecil= angka [0];
		}
		else if(angka [i] > terbesar) {
			terbesar = angka [i];
		}
		else if(angka [i] < terkecil) {
			terkecil = angka [i];
		}
	}
	
	cout<< " Angka terbesar: " <<terbesar<<endl;
	cout<< " Angka terkecil : " <<terkecil<<endl;
}
