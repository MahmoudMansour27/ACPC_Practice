#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string task_string;
    cout << "enter your string: ";
    cin >> task_string;
    transform(task_string.begin(), task_string.end(), task_string.begin(), ::tolower);
    for(int i = 0; i < task_string.length(); i++) { 
        if(task_string[i] == 'a' || task_string[i] == 'o' || task_string[i] == 'y' || task_string[i] == 'e' || task_string[i] == 'u' || task_string[i] == 'i') {task_string.erase(i,1);i--;}
        else {task_string.insert(i,1,'.'); i++;}
        }  
    cout << task_string << endl;
}