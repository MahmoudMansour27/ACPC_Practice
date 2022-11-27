#include <iostream>
using namespace std;

int main(){
    int limak_w = 1, bob_w = 1, years = 0;
    while (limak_w <= bob_w) { limak_w *= 3, bob_w *= 2, years++; }
    cout << years << endl;
}