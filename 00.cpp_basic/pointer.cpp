#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main()
{
    // int a = 10;
    int A[5] = {2, 3, 4, 5, 10}; // var store in stack
    int *p;                      // store in stack
    // p = (int *)malloc(5 * sizeof(int)); // in heap;
    p = new int[5];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[4] = 40;
    p[5] = 50;

    // cout << a << endl;
    // cout << *p << endl;

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;

    delete[] p;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p4) << endl;


    return 0;
}