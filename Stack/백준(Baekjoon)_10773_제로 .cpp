#include<iostream>
#include<stack>

using namespace std;

stack <int> st;

int main() {
	int sum = 0;
	int number = 0;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> number;
		if (number == 0) {
			st.pop();
		}
		else {
			st.push(number);
		}
	}

	for (int i = 0; !st.empty(); i++) {
		sum += st.top();
		st.pop();
	}
	cout << sum << "\n";
}