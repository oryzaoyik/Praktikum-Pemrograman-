#include<iostream>
using namespace std;

int main()
{
	int angka[5];
	int i,genap,ganjil;
		for(int i=1;i<=5;i++){
		
			cout<<"angka ke-" <<i<< ":";
			cin>> angka[i];
		}
		genap=0;
		ganjil=0;
			for(int i=1; i<=5; i++){
					if(angka[i]%2==0){
						cout<<angka[i] <<endl;
						genap++;
					}
					else
					{
						ganjil++;
					}
			}
		if(ganjil>0){
			cout<<"even number not found in array";
		}
}
