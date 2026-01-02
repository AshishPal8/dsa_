#include <iostream>
using namespace std;

void printCounting(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        printCounting(n - 1);
    }
}

void printCoountingLoop(int n){
    while(n > 0) {
        cout << n << endl;
        n--;
    }
}

int main()
{
    int x;
    cin >> x;

    printCoountingLoop(x);
}