#include<iostream>
using namespace std;

void isiMatrix(int matrix[3][3]);
void hitungMatrix(int matrix1[3][3],int matrix2[3][3]);

int main(){
		int matrix1[3][3];
		int matrix2[3][3];
		
		cout<<"masukkan nilai matrix pertama:" <<endl;
		isiMatrix(matrix1);
		cout<<"masukkan nilai matrix kedua:"<<endl;
		isiMatrix(matrix2);
		
		hitungMatrix(matrix1,matrix2);
		
}
void isiMatrix(int matrix[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>matrix[i][j];
		}
	}
}
void hitungMatrix(int matrix1[3][3], int matrix2[3][3]){
	int hasil[3][3];
	int result;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			result=0;
				result+= matrix1[3][3]* matrix2[3][3];
			
			hasil[i][j]=result;
		}
	}
}
