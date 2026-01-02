#include <iostream>
using namespace std;

int power(int m, int n){
    if( n == 0) return 1;
        return power(m, n-1)*m;
}

int powerOptimised(int m, int n){
    if(n == 0) return 1;
    if(n %2 == 0) {
        return powerOptimised(m*m, n/2);
    } else {
        return m* powerOptimised(m*m, (n-1)/2);
    }
}


int main(){
    int result = power(3, 4);
    int result1 = powerOptimised(3, 4);

    cout << result << endl;
    cout << result1 << endl;

    return 0;
}