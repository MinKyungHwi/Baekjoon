#include<iostream>
using namespace std;

int main(){
	int n1,n2,n3, result;
	int count[10]={0};
	
	cin >> n1 >> n2 >> n3;
	result = n1*n2*n3;
	
	while(result !=0){
		count[result%10] +=1;
		result /=10;
	}
	
	for(int i=0 ; i<10; i++){
		cout << count[i]<<endl;
	}

}
