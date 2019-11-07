#include<iostream>
using namespace std;

int main(){
	int a, b;
	
	cin >> a >> b;
	
	if(b < 45){
		b += 15;
		if(--a < 0){
			a =23;
		}
	}
	else {
		b -= 45;
	}
	cout << a << " " << b;
}


// if ( --a < 0 )  	a 변수를 먼저 연산 처리를 안 하고 하면 
// 					-1 출력 먼저 연산 후 조건에 부합되므로 23으로 출력

// 60 + b -45 = b + 15  same 
