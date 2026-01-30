#include <iostream>
using namespace std;

string toLowerCase(string str) {
    string newString; 
    for(int i = 0; str[i] != NULL; i++) {
        newString += str[i] + 32;
    }

    return newString;
}
string toUpperCase(string str) {
    string newString; 
    for(int i = 0; str[i] != NULL; i++) {
        newString += str[i] - 32;
    }

    return newString;
}

string oppositeCase(string str) {
    string newString; 
    for(int i = 0; str[i] != NULL; i++) {
        if(str[i] >= 65 && str[i] <= 90){
            newString += str[i] + 32;
        } else {
            newString += str[i] - 32;
        }
    }

    return newString;
}

int main(){
    string str = "WELCOME";
    string str2 = "welcome";
    string str3 = "weLcoMe";

    string result = toLowerCase(str);
    string result2 = toUpperCase(str2);
    string result3 = oppositeCase(str3);

    cout << result << endl;
    cout << result2 << endl;
    cout << result3 << endl;

}