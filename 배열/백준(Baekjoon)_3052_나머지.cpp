#include<iostream>
using namespace std;

int main(){
	int count=0;
	int input[10]={0};

	for(int i=0; i<10 ; i++){
		cin>> input[i];
		input[i] %=  42;
	}
	
	
	for(int i=0; i<10 ; i++){
		for(int j=0; j<i ; j++){
			if(input[i]== input[j] ){
				count--;
				break;
			}
		}
		count++;
	}
	 
	

	cout << count << endl;
}
