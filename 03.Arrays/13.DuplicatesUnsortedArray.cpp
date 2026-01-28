#include <iostream>
using namespace std;
struct Array
{
    int A[12];
    int size;
    int length;
};

void findDuplicates(struct Array arr)
{
    int n = arr.length;

    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (arr.A[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr.A[i] == arr.A[j])
                {
                    count++;
                    arr.A[j] = -1;
                }
            }
        }
        if (count > 1)
        {
            cout << arr.A[i] << " : " << count << endl;
            ;
        }
    }
    cout << endl;
}

void findDuplicatesUsingHash(struct Array arr)
{
    int n = arr.length - 1;
    int hashTable[8] = {0};

    for (int i = 0; i < n; i++)
    {
        hashTable[arr.A[i]]++;
    }
    for (int i = 0; i < arr.A[n]; i++)
    {
        if (hashTable[i] > 1)
        {
            cout << i << " " << hashTable[i] << endl;
        }
    }
}

int main()
{
    struct Array arr1 = {{8, 3, 6, 4, 6, 5, 6, 8, 2, 7}, 12, 10};

    // findDuplicates(arr1);
    findDuplicatesUsingHash(arr1);

    return 0;
}