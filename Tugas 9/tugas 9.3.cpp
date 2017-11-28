#include <iostream>
using namespace std;

int *generateArray(int number);
int length = 10;
int main()
{
		int **array2d = new int*[length];
			for (int i = 1; i <= length; i++) {
			array2d[i - 1] = new int[length];
			array2d[i - 1] = generateArray(2 * i + 1);
		}

		for (int i = 1; i <= length; i++) {
		for (int j = 0; j < i; j++) {
			cout << array2d[i - 1][j] << " ";
			}
		cout << endl;
		}
}

		int *generateArray(int number){
		int *numbersList = new int[length];
			for (int i = 0; i < length; i++) {
			numbersList[i] = number + i;
			}
		return numbersList;
		}
