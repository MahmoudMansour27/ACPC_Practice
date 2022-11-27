#include <iostream>
#include<algorithm>
using namespace std;


int main(){
    
    int test_cases=0, length=0, moves=0, index=0;
    string test_case;
    cout << "number of test cases: ";
    cin >> test_cases;
    for(int i = 0;i<test_cases; i++){
        cout << "test case length: ";
        cin >> length;
        cout << "enter your test case: ";
        cin >> test_case;

        while (test_case[0] != '(' || test_case[test_case.length()-1] != ')')
        {

            if (test_case[index] == ')'){test_case.erase(index, 1); test_case.insert(test_case.length(), 1, ')');moves++;}
            else {index++;}
            
        }

        cout << moves<<endl;
        
    }  // )))((((())
}