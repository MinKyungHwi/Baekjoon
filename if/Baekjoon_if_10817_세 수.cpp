#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int a, b, c;
	int array[3] = {};
	
	cin >> a >> b >> c;
	
	array[0] = a;
	array[1] = b;
	array[2] = c;
		
	sort(array,array+3);
	
	cout << array[1];
	
}
