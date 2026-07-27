#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *S;

public:
    Stack(int size);
    ~Stack();
    void push(int x);
    // int pop();
    // int peak(int x);
    int isFull();
    // int isEmpty();
    void Display();
    // void stackTop();
};

Stack::Stack(int size)
{
    this->size = size;
    top = -1;
    S = new int[size];
}

Stack::~Stack()
{
    delete[] S;
}

void Stack::push(int x)
{
    if (isFull())
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        S[top] = x;
    }
}

int Stack::isFull()
{
    if (top == size - 1)
        return 1;
    return 0;
}

void Stack::Display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << S[i] << " | " << flush;
    }
    cout << endl;
}

int main()
{
    int A[] = {
        1,
        3,
        5,
        7,
    };
    Stack stk(sizeof(A) / sizeof(A[0]));

    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        stk.push(A[i]);
    }
    stk.push(11);
    cout << "Stack full: " << stk.isFull() << endl;

    cout << "Stack Display: " << flush;
    stk.Display();
}