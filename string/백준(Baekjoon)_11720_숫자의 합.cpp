#include<iostream>
using namespace std;

int main(){
	long long a;
	int sum = 0;
	
	cin >> a;
	char array[a];
	
	for(int i =0 ; i < a ; i++ ){
		cin >> array[i] ;	
	}
	
	for(int i =0 ; i < a ; i++){
		sum += array[i] - '0';
	}
	
	cout << sum;
}
