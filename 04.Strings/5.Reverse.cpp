
#include <iostream>
using namespace std;

void reverse(string str)
{
    char b[4];
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    i = i - 1;
    int j;
    for (j = 0; i >= 0; i--, j++)
    {
        b[j] = str[i];
    }
    b[j] = '\n';

    cout << b << endl;
}

void reverseOptimal(string str){
    char t;
    int i, j;
    
    for(j = 0; str[j] != '\0'; j++){}
    j = j-1;
    for(i = 0; i < j; i++, j--){
        t = str[i];
        str[i] = str[j];
        str[j] = t;
    }

    cout << str << endl;
}

int main()
{
    string str = "python";
    reverseOptimal(str);
}