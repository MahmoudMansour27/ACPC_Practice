#include <iostream>
#include <string>
#include <regex>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string test = "WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";
    int i = 0;
    test = regex_replace(test, regex("WUB"), " ");
    test = regex_replace(test, regex("  "), " ");
    (test[0] == ' ')? test.erase(0,1): test;
    (test[test.length()-1] == ' ')? test.erase(test.length()-1,1): test;
    cout << test <<endl;
}
