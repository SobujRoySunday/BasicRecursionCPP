#include <bits/stdc++.h>
using namespace std;

int sumFunctional(int number){
    if(number == 0){
        return 0;
    }
    return number + sumFunctional(number-1);
}

int main(){
    int number;
    cin>>number;
    cout<<sumFunctional(number);
}