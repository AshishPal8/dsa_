#include <iostream>
using namespace std;
struct Array
{
    int A[12];
    int size;
    int length;
};

void findMissing(struct Array arr)
{
    int l = 0;
    int h = 12;
    struct Array newArray = {{0}, 12, 0};

    for (int i = 0; i <= h; i++)
    {
        newArray.A[arr.A[i]]++;
    }
    for (int i = l; i <= h; i++)
    {
        if (newArray.A[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    // struct Array arr1 = {{1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 12, 10};
    struct Array arr1 = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10}, 12, 10};

    findMissing(arr1);
    // cout << "Result: " << result << endl;
    return 0;
}