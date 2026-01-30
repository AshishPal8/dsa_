#include <iostream>
using namespace std;

void countVowelConsonent(string str) {
    int vCount = 0, cCount = 0;
    for(int i = 0; str[i] != NULL; i++) {

        if(
            str[i] == 'a' || 
            str[i] == 'e' || 
            str[i] == 'i' ||
            str[i] == 'o' || 
            str[i] == 'u' || 
            str[i] == 'A' || 
            str[i] == 'E' || 
            str[i] == 'I' ||
            str[i] == 'O' || 
            str[i] == 'U'
        ) {
            vCount++;
        } else if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)){
            cCount++;
        }
    }

    cout << "Vowel: " << vCount << endl;
    cout << "Consonent: " << cCount << endl;
}

void countWords(string str) {
    int count= 1;
    for(int i = 0; str[i] != NULL; i++){
        if(str[i] == ' ' && str[i-1] != ' '){
            count++;
        }
    }

    cout << "Words Count: " << count << endl;
}

int main(){
    string str = "how  re you";
    countVowelConsonent(str);
    countWords(str);

}