#include <iostream>
using namespace std;
int fact(int number){
    if(number > 2)
    number = number * fact(number-1);
    return number;
}

int main(void){
    int num, result = 1;
    cin>>num;
    if(num!=0)
        result=fact(num);
    cout<<fact(num);
}
