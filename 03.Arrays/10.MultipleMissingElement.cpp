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
    int n = arr.length - 1;
    int l = arr.A[0];
    int r = arr.A[n];
    int diff = l - 0;
    int missingEle;

    for (int i = 0; i < n; i++)
    {
        if ((arr.A[i] - i) != diff)
        {
            while (diff < arr.A[i] - i)
            {
                cout << i + diff << " ";
                diff++;
            }
        }
    }
}

int main()
{
    // struct Array arr1 = {{1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 12, 10};
    struct Array arr1 = {{6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19}, 12, 11};

    findMissing(arr1);
    // cout << "Result: " << result << endl;
    return 0;
}