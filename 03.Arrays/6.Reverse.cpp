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

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(struct Array *arr){
    int *B;
    int i,j;

    B = new int();
    for(i = arr->length-1, j=0; i>=0; i--, j++){
        B[j] = arr->A[i];
    }
    for(i = 0; i <arr->length; i++){
        arr->A[i] = B[i];
    }
}

void Reverse2 (struct Array *arr){
    int i, j;
    for(i = 0, j = arr->length-1; i < j; i++, j--){
        swap(&arr->A[i], &arr->A[j]);
    }
}




int main()
{
    struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    // reverse(&arr1);
    Reverse2(&arr1);
    
    Display(arr1);
    return 0;
}