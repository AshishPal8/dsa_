#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main()
{
    int a = 10;
    int &r = a;
    cout << a <<endl;
    cout << r << endl;

    int b = 5;
    r = b;

    cout << r << endl;
    cout << a << endl;


    return 0;
}