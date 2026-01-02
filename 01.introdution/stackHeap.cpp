#include <iostream>
using namespace std;

int main()
{
    int *p;

    // allocate memory in heap;
    p = new int[5];           // in c++
    p = (int *)malloc(2 * 5); // in c lang;
}