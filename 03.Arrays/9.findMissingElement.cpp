#include <iostream>
using namespace std;
struct Array
{
    int A[12];
    int size;
    int length;
};

int findMissing(struct Array arr)
{
    int sum = 0;
    int n = arr.length;
    int lastEle = arr.A[n];
    for (int i = 0; i <= n; i++)
    {
        sum = sum + arr.A[i];
    }
    int s = lastEle * (lastEle + 1) / 2; // formula: n * (n+1)/2;
    int missingEle = s - sum;

    return missingEle;
}
int findMissingNotFromOne (struct Array arr){
    int n = arr.length-1;
    int l = arr.A[0];
    int r = arr.A[n];
    int diff = l - 0;
    int missingEle;

    cout << n << endl;
    cout << l << endl;
    cout << r << endl;
    cout << diff << endl;

    for(int i = 0; i < n; i++){
        cout << arr.A[i] - i << " " <<  diff << endl;
        if((arr.A[i] - i) != diff) {
            missingEle = diff + i;
            break;
        }
    }

    return missingEle;
}

int main()
{
    // struct Array arr1 = {{1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 12, 10};
    struct Array arr1 = {{6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17}, 12, 10};

    int result = findMissingNotFromOne(arr1);
    cout << "Result: " << result << endl;
    return 0;
}