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
            A[i] = i + 1;
        }
    }
    void Append(int x)
    {
        if (length < size)
        {
            A[length] = x;
            length++;
        }
    }
    void Insert(int index, int x)
    {
        int i;
        if (index >= 0 && index <= length)
        {
            for (i = length; i > index; i--)
            {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }
    int Delete (int index) {
        int x = 0;
        int i;
        if(index >= 0 && index <= length) {
            for(i = index; i < length; i++){
                A[i] = A[i+1];
            }
            length--;
        }
        return x;
    }
    void swapFn(int *x, int *y) {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }

    int linearSearch(int x) {
        for(int i = 0; i< length; i++){
            if(x == A[i]){
                // swapFn(&A[i], &A[i-1]); // transposition
                // swapFn(&A[i], &A[0]); // move to front/head;
                return i;
            }
        }
        return -1;
    }
    int binarySearch(int key){
        int l = 0;
        int h = length;
        int mid = 0;
        
        while(l <= h)
        {
            mid = (l+h)/2;
            if(key == A[mid])
                return mid;
            else if(key < A[mid])
                return h = mid-1;
            else 
                return l = mid+1;
        }
        return -1;
    }

    int RBinarySearch(int l, int h, int key){
        int mid= 0;

        if(l <= h){
            mid = (l+h)/2;

            if(key == A[mid]){
                return mid;
            } else if(key < A[mid]){
                return RBinarySearch(l, mid-1, key);
            } else {
                return RBinarySearch(mid+1, h, key);
            }
        }

        return -1;
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
    arr.Append(13);
    arr.Insert(2, 15);
    // int deleted = arr.Delete(2);
    // cout << deleted << endl;
    int result = arr.linearSearch(15);
    cout << "Linear Result: " << result << endl;
    int binaryResult = arr.binarySearch(4);
    cout << "Binary Result: " << binaryResult << endl;
    int RbinaryResult = arr.RBinarySearch(0, 7, 4);
    cout << "Recursive Binary Result: " << RbinaryResult << endl;
    arr.Display();

    return 0;
}