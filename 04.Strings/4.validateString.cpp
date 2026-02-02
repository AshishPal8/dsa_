
#include <iostream>
using namespace std;
// TODO recheck
bool validate(string str)
{
    int i;
    for (i = 0; str[i] != '\n'; i++)
    {
        if (!(i >= 'A' && i <= 'Z' &&
              i >= 'a' && i <= 'z' &&
              i >= '0' && i <= '9'))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "ashu";
    if (validate(str))
    {
        cout << "Valid String" << endl;
    }
    else
    {
        cout << "invalid String" << endl;
    }
}