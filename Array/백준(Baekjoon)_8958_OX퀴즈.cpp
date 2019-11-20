#include<iostream>
#include<string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,sum=0, count=0;
	string array;
	
	cin >> n;
	for(int i=0; i<n ; i++){
		cin>>array;	
		for(int i=0 ; i< array.length() ; i++){
			if(array[i]=='O'){
				count++;
				sum = sum+count;
			}
			else{
				count=0;
			}
		}
	cout << sum << "\n";
	
	array.clear();
	sum=0; 
	count=0;
	}
}
