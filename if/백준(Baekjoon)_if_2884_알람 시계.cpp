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


// if ( --a < 0 )  	a ������ ���� ���� ó���� �� �ϰ� �ϸ� 
// 					-1 ��� ���� ���� �� ���ǿ� ���յǹǷ� 23���� ���

// 60 + b -45 = b + 15  same 
