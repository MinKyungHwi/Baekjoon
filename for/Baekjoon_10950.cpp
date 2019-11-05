#include <iostream>
using namespace std;


int main(){
	
	int n;
	int n1 =0;
	int n2 =0;
	int array[n];
	
	cin >> n;
	for(int i= 0 ; i < n ; i++){
		cin >> n1 >> n2;
		array[i] = n1+n2;
	}
	
 	for(int i= 0 ; i < n ; i++){
 		cout << array[i] << endl;
	}
 	
	return 0; 
}
