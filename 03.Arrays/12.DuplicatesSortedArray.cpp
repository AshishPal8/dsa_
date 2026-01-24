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
    int lastDuplicates = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != lastDuplicates)
        {
            cout << arr.A[i] << " ";
            lastDuplicates = arr.A[i];
        }
    }
    cout << endl;
}

void findDuplicatesCount(struct Array arr) {
    int n = arr.length;
    for(int i = 0; i < n; i++){
        if(arr.A[i] == arr.A[i + 1]){
            int j = i + 1;
            while(arr.A[j] == arr.A[i]) j++;
            cout << arr.A[i] << " is appearing " << j-i << " times" << endl;
            i = j-1;
        }
    }
}

void findDuplicatesUsingHash(struct Array arr) {
    int n = arr.length-1;
        int hashTable[20] = {0};

        for(int i = 0; i < n; i++) {
            hashTable[arr.A[i]]++;
        }
        for(int i = 0; i< arr.A[n]; i++){
            if(hashTable[i] > 1) {
                cout << i << " " << hashTable[i] << endl;
            }
        }
}

int main()
{
    // struct Array arr1 = {{1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 12, 10};
    struct Array arr1 = {{3,6,8,8,10,12,15,15,20,20}, 12, 10};

    // findDuplicates(arr1);
    // findDuplicatesCount(arr1);
    findDuplicatesUsingHash(arr1);

    // cout << "Result: " << result << endl;
    return 0;
}