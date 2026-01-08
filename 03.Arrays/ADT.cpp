#include <iostream>

using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array(int size)
    {
        this->size = size;
        A = new int[size];
    }
    void Create()
    {
        cout << "Enter number of elements:" << endl;
        length = 5;
        cout << "Enter the array elements" << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Array elements: " << i << " = " << endl;
            A[i] = i+1;
        }
    }
    void Display()
    {
        for (int i = 0; i < length; i++)
            cout << A[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array arr(10);
    arr.Create();
    arr.Display();

    return 0;
}