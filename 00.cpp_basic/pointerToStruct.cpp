#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle *p;
    p = new Rectangle;

    p->length = 18;
    p->breadth = 9;

    cout << p->length << endl;
    cout << p->breadth << endl; 
}