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

bool isBalanced(char *exp)
{
    Stack stk((int)strlen(exp));

    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(')
        {
            stk.push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (stk.isEmpty())
            {
                return false;
            }
            else
            {
                stk.pop();
            }
        }
    }
    return stk.isEmpty() ? true : false;
}

int main()
{
    char E[] = "((a+b) * (c-d))";
    cout << isBalanced(E) << endl;
}