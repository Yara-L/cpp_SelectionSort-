#include <iostream>
using namespace std;

int main() {
	const int n = 9;
	unsigned int arr[n]{9, 3, 4, 2, 1, 0, 7, 5, 6};
	int num;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++ ) {
			if (arr[i] > arr[j]) {
				num = arr[i];
				arr[i] = num;
				if (arr[j] > num) {
					num = arr[j];
					arr[j] = arr[i];
					arr[i] = num;
				}
			}
			else if (arr[i] < arr[j]) {
				num = arr[j];
				arr[j] = arr[i];
				arr[i] = num;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}