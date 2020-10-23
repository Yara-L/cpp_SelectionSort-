#include <iostream>
using namespace std;

int main() {
	const int x = 3, y = 3;
	int num;
	unsigned int arr[x][y]{ 6, 3, 4,
							2, 1, 0, 
							7, 5, 9 };

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < y; j++) {
			for (int q = 0; q < x; q++) {
				for (int s = 0; s < x; s++) {
					if (arr[i][j] < arr[q][s]) {
						num = arr[i][j];
						arr[i][j] = num;
						if (arr[q][s] < num) {
							num = arr[q][s];
							arr[q][s] = arr[i][j];
							arr[i][j] = num;
							
						}
					}
					else if (arr[i][j] > arr[q][s]) {
						num = arr[q][s];
						arr[q][s] = arr[i][j];
						arr[i][j] = num;
					}	
				}
			}
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
