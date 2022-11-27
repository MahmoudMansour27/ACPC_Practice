#include <iostream>
using namespace std;

int main(){
    string s = "AXBYBXA";
    //cout << "enter your string:";
    //cin >> s;
    
    (s.length() > 3)?((s.find("AB") != string::npos)&&(s.find("BA") != string::npos))? cout<<"YES":cout<<"NO": cout<<"NO"; 
}