#include <iostream>
using namespace std;
int main() {
	int N;
	int k = 0;
	cin >> N;
	int *array = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < N; i++) {
		if (array[i] < 2 * array[i-1]) {
			k++;
		}
	}
	cout << k;
	return 0;
}
