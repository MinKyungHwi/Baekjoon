#include<iostream>
using namespace std;

int Fibonacci(int number){
	static int sum[21];
	if (number ==0 ) return 0;
	if (number ==1 ) return 1;
	return sum[number] = Fibonacci(number-1) + Fibonacci(number-2);
}

int main(){
	int n;
	cin >> n;

	cout << Fibonacci(n);
}
