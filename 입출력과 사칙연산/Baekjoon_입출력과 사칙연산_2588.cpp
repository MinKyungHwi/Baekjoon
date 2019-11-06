#include<iostream>
using namespace std;

int main(){
	int a,b;
	int i,j,k;
	int result;
	
	cin >> a >>b;
	result = a*b;
	
	i = a*(b % 10);
	j = a*((b / 10) % 10); 
	k = a*(((b / 10) /10) % 10); 
	
	cout << i << endl;
	cout << j << endl;
	cout << k << endl;
	cout << result << endl;
}
