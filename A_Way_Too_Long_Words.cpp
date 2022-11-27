#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "enter your work: ";
    cin >> word;
    word = (word.length() > 10)? word[0]+to_string(word.length()-2)+word[word.length()-1]: word;
    cout << word << endl;
}