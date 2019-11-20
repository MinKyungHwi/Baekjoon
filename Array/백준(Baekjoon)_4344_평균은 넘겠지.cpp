#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout<<fixed;	
	cout.precision(3);
	float per;
	int n;
	cin >> n;
	
	float *str = new float[n];
	for(int i=0; i<n; i++){
	
		float avg,people;
		int count =0,temp =0,a =0;
		
		cin>> people;
		a = people;
		int *arr2=new int[a];
		
		for(int j=0; j<people; j++){
			cin >> arr2[j];
			temp=arr2[j]+temp;
		}
		avg=temp/people;
		
		for(int j=0 ; j<people; j++){
			if(arr2[j]>avg){
				count++;
			}
		}
		per=(count/people)*100;
		str[i] = per;
	}
	
	for(int i=0; i<n ;i++){
		cout << str[i] << "%" << endl;
	}
}
