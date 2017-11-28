#include<iostream>
using namespace std;

float averagePositive(int input[10],bool status); 

main(){
	int input[10];
	
	cout<< "Masukkan bilangan pada array="<<endl;
	for(int i=0;i<10;i++){
		cin>>input[i];
	}
	
	cout<< "average positive numbers=" <<averagePositive(input, true)<<endl;
	cout<<"avergae negative numbers=" << averagePositive(input,false)<<endl;
}
float averagePositive(int input[10],bool status){
	float positive=0, negative=0, jumPos=0, jumNeg=0;
	
	for (int i=0; i<10; i++){
		if(input[i]>0){
			positive+= input[i];
			jumPos++;
		} else {
			negative += input[i];
			jumNeg++;
		}
	}
	if (status){
		return positive / jumPos;
	} else {
		return negative / jumNeg;
	}
}
