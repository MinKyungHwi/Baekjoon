#include<iostream>
using namespace std;

int main() {
	int money;
	
	int array[6] = {500, 100, 50, 10, 5, 1};
	int mok, count = 0, namu = 0;

	cin >> money;
	int people = 1000 - money;

	for (int i = 0; i < 6; i++) {
		if (array[i] <= people) {
			namu = people % array[i];
			mok = people / array[i];
			count += mok;
			people = namu;
		}
	}
	cout << count;
}
