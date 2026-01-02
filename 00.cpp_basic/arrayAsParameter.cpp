#include <iostream>

using namespace std;

// array are always pass by address.
void fun( int a[]) { 
    cout << sizeof(a)/sizeof(int)<< endl;

    for(int i = 0; i< 5; i++) {
        cout << a[i] << " "; 
    }
    cout << endl;      
}

int * pointerFunc(int size) {
    int *p;
    p = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = i+1;
    }

    return p;
}
int main(){
    int *ptr, sz = 5;
    int arr[] = {1,2,3,4,5};
    // fun(arr);
    ptr = pointerFunc(); 

    for(int i = 0; i < sz; i++ ){
        cout << ptr[i] << " ";
     }
    cout << endl;
}