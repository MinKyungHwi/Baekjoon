#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	vector<int> vec;
	
	cin >> n;
	for (int i=0; i<n ; i++){
		int vce_data;
		cin >> vce_data;
		vec.push_back(vce_data);
	}

	sort(vec.begin(), vec.end());
	cout << vec[0] <<' '<< vec[vec.size() - 1] << endl;
}
