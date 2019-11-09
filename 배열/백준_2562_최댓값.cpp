#include<iostream>
using namespace std;

int main(){
	int n,index,temp, max=0;
	int array[9];
	
	
	for (int i=0; i<9 ; i++){
		cin >> array[i];
	}
	
	for (int i=0; i<9 ; i++){
		
		if(max <= array[i]){
			max = array[i];
			index = i;
			temp = index;
		}
	}
	
	cout << max << endl;
	cout << temp+1 << endl;
}
