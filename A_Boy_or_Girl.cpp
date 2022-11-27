#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <algorithm>


int main(){
    string name, out = ""; 
    int length = 0;
    cout << "enter her/his name: ";
    cin >> name;
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    for(int i = 0; i < name.length(); i++){
        char c = name[i];
        (out.find(c) == string::npos)? out+=c: out;
    }
    
    (out.length()%2 == 0)? cout<<"CHAT WITH HER!"<<endl:cout<<"IGNORE HIM!"<<endl;
}