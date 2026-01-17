// 119
#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

int Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertInArray(struct Array *arr, int x){
    int i = arr->length -1;
    if(arr->length == arr->size) return;

    while(i >= 0 && arr->A[i] > x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
}

int isSorted(struct Array arr){
    for(int i = 0; i < arr.length-1; i++){
        if(arr.A[i] > arr.A[i+1]) return 0;
    }
    return 1;
}

void ReArrange(struct Array *arr){
    int i, j = arr->length-1;

    while(i < j) {
        while(arr->A[i] < 0) i++;
        while(arr->A[j] >= 0) j--;
        if(i < j) {
            Swap(&arr->A[i], &arr->A[j]);
        }
    }
}



int main()
{
    struct Array arr1 = {{2, -3, 25, 10, -15, -7}, 10, 6};

    // insertInArray(&arr1, 19);

    // int result = isSorted(arr1);
    // cout << "Result: " << result << endl;

    ReArrange(&arr1);
    
    Display(arr1);
    return 0;
}