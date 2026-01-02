#include <iostream>
using namespace std;

int sumUsingRecursion(int n){
    if( n == 0) return 0;
        return sumUsingRecursion(n-1)+n;
}

int sumUsingFormula(int n){
    return n*(n+1)/2;
}

int sumUsingLoop(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int result = sumUsingRecursion(10);
    int result1 = sumUsingFormula(10);
    int result2 = sumUsingLoop(10);

    cout << result << endl;
    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}