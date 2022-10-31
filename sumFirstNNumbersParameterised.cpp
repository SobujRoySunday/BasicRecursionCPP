#include <bits/stdc++.h>
using namespace std;

void sumNumbersParameterised(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumNumbersParameterised(i-1, sum + i);
}

int main(){
    int number;
    cin>>number;
    sumNumbersParameterised(number, 0);
}