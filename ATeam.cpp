#include <iostream>
#include <string>
using namespace std;

int Rank(string points){
    int counter = 0;
    counter += (points[0] == '1')? 1:0;
    counter += (points[2] == '1')? 1:0;
    counter += (points[4] == '1')? 1:0;
    return counter;
}

int main(){
    int num_problems = 0, out = 0;
    cout << "enter number of problems: ";
    cin >> num_problems;
    string line;
    getline(cin, line);  // ignored
    for(int i=0;i<num_problems;i++){ 
        cout << "enter points line: \n";
        getline(cin, line);
        out += (Rank(line) >= 2)? 1:0;
    }
    cout << out <<endl;
}