#include<iostream>
using namespace std;

int main(){
	int array[8];
	int value=1;
	
	for(int i=0; i < 8; i++){
		cin >> 	array[i];
	}
	
	for(int i=0; i < 8; i++){
		if (array[i]> array[i+1]){
			value++;
		}else if(array[i]< array[i+1]){
		value--;
		}
	}	
			
	if(value == 7){
		cout << "descending";
	}else if (value == -7){
		cout << "ascending";
	}else
	{
		cout << "mixed";
	}
}
