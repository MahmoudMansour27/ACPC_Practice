#include <iostream>
using namespace std;

int main(){
    int x = 0, statements = 0, counter = 0;
    cout << "enter number of statements: ";
    cin >> statements;
    while (counter < statements) { 
        string statement;
        cout << "enter your statement: ";
        cin >> statement;     
        (statement == "++X" || statement == "X++")? x++: x--;
        counter++;
        }
    cout << x << endl;
    
}