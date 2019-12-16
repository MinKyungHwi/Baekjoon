#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000;

int main(void)
{
   int c_number;
   int array[MAX];
   int time = 0;
   
    cin >> c_number;
    for (int i = 0; i < c_number; i++){
        cin >> array[i];
   }
   
    sort(array, array + c_number); 
    for (int i = 0; i < c_number; i++){
        for (int j = 0; j <= i; j++){
        time += array[j];
      }
   }   
    cout << time << endl;
    return 0;
}
