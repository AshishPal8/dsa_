// #127
#include <iostream>
using namespace std;
struct Array
{
    int A[12];
    int size;
    int length;
};

void findPair(struct Array arr, int k)
{
    int n = arr.length;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr.A[i] + arr.A[j] == k)
                cout << arr.A[i] << " + " << arr.A[j] << " = " << k << endl;
        }
    }
    cout << endl;

    // time: n-1 + n-2 + ... +3+ 2+1 = n(n-1)/2 = O(n^2);
}

void findPairUsingHash(struct Array arr, int k)
{
    int n = arr.length;
    int hashTable[16] = {0};

    for (int i = 0; i < n-1; i++)
    {
        if(hashTable[k - arr.A[i]] != 0) {
                cout << arr.A[i] << " + " << k - arr.A[i] << " = " << k << endl;
        }
        hashTable[arr.A[i]]++;
    }
}

int main()
{
    struct Array arr1 = {{6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 12, 10};

    // findPair(arr1, 10);
    findPairUsingHash(arr1, 10);

    // cout << "Result: " << result << endl;
    return 0;
}