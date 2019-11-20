#include <iostream>  
using namespace std;

int main(void)
{
	int subject,max=0;
	float sum = 0,score[1000];
	
	cin >> subject;
	
	for (int i = 0; i < subject; ++i)
	{
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
	}
		
	for (int i = 0; i < subject; ++i){
		score[i] = score[i] / max * 100;
		sum += score[i];		
	}
		
	cout << fixed; 		
	cout.precision(2);	
	cout << sum / subject << endl;

	return 0;
}
