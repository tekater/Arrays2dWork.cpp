#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;
int main()
{
	setlocale(0, "");
	srand(time(NULL));

	cout << "Задание 1\n\n"; // Говорилось взять одно задание на выбор :)


	const int length = 5;
	int arr[length][length] = {};
	int r = 0;
	cout << "Введите значение массива:\n";
	cin >> arr[0][0];
	for(int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (j == 4) {
				arr[i][j] = arr[i][j-1] * 2;
			}
			else {
				arr[i][j + 1] = arr[i][j] * 2;
			}
			
			r = j;
		}
		if (i == 4) {
			arr[i][r] = arr[i][r-1] * 2;
		}
		else {
			arr[i + 1][0] = arr[i][r] * 2;
		}
		
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << "\t\b ";
		}
		cout << endl;
	}
}
