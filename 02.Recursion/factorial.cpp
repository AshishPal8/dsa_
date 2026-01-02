#include <iostream>
using namespace std;

int factorialUsingRecursion(int n){
    if( n == 0) return 1;
        return factorialUsingRecursion(n-1)*n;
}

int factorialUsingLoop(int n){
    if(n == 0) return 1;
    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum = sum * i;
    }
    return sum;
}

int main(){
    int result = factorialUsingRecursion(5);
    int result1 = factorialUsingLoop(5);

    cout << result << endl;
    cout << result1 << endl;

    return 0;
}