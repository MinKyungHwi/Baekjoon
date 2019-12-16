#include<iostream>

using namespace std;
const int num_MAX = 10;

int main() {
	int kind_of, money;			
	int array[11];		
	int mok, count = 0, namu = 0;

	cin >> kind_of >> money;	
	
	for (int i = 0; i < kind_of; i++) {
		cin >> array[i];
	}						

	for (int i = kind_of-1; 0 <=i; i--) { // 
		if (array[i] <= money) {
			namu = money % array[i];
			mok = money / array[i];
			count += mok;
			money = namu;
		}
	}
	cout << count;
}
