#include <iostream>
using namespace std;

int count(string exp, char c){
    int counter = 0;
    for(int i = 0; i < exp.length(); i++){
        if(exp[i] == c) {counter++;}
    }
    return counter;
}

int main(){
    int start = 0, end = 1, num;
    bool flage = false;
    string input = "1001";

    /*cout << "enter number of integers: ";
    cin >> num;
    cout << "enter your integers sperated by single space: ";
    cin >> input;*/

    //111/0010/1101111111 3 , 4
    //111/1101/1101111111
    // don't forget to remove spaces between 1s and 0s to decrease number of loops :)
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '0'){
            start = i;
            end = 1;
            for(int j = start; j < (input.length()-start); j++){
                if(count(input.substr(start, end), '0') >  count(input.substr(start, end), '1') && count(input.substr(start, end), '0') > (count(input, '0')/2)){
                    flage = true;
                    cout << "start: "<<start << " end: "<<end<<endl;
                    break;
                }
                end++;
            }
            if(flage == true) {break;}
        }
        else{
            continue;
        }

    }

    cout << "maximum number of ones: "<< (count(input, '1')+count(input.substr(start, end), '0'))-count(input.substr(start, end), '1')  <<endl;




}