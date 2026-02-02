#include <iostream>
using namespace std;

void compareString(string A, string B)
{
    int i, j;

    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\n'; i++, j++)
    {
        if (A[i] != B[j])
            break;
    }
    if (A[i] == B[j])
        cout << "Equal" << endl;
    else if (A[i] < B[j])
        cout << "Smaller" << endl;
    else
        cout << "Greater" << endl;
}

// TODO palindrome
int main()
{
    string str1 = "Painter";
    string str2 = "Painting";

    compareString(str1, str2);
}