#include <iostream>
using namespace std;

void duplicatesUsingBits(string A)
{
    long int h = 0, x = 0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i] - 'a'); // or 97

        if ((x & h) > 0)
        {
            cout << A[i] << " is duplicate" << endl;
        }
        else
        {
            h = x | h;
        }
    }
}

int main()
{
    string str1 = "finding";

    duplicatesUsingBits(str1);
}