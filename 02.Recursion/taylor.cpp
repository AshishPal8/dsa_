#include <iostream>
using namespace std;

double taylor(int x, int n){
    static double p = 1, f = 1;
    double r;

    if(n == 0)
        return 1;
    r = taylor(x, n-1);
    p = p*x;
    f = f*n;
    return r + p/f;
}

double taylorhornor(int x, int n){
    static double s;
    if(n== 0) return s;
    s = 1+ x* s/n;
    return taylorhornor(x, n-1);
}

double ITaylor(int x, int n){
    static double s=1;
    double num  = 1;
    double den = 1;
    int i;

    for(i = 1; i<= n; i++){
        num*= x;
        den*= i;
        s += num/den;
    }

    return s;
}

int main(){
    cout << taylor(2, 10) << endl;
    cout << taylorhornor(2, 10) << endl;
    cout << ITaylor(2, 10) << endl;
}