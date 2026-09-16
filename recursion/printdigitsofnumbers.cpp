#include <iostream>
using namespace std;

void noofdigit(int n){
    if(n <= 0){
        return;
    }
    cout << n%10 << endl;
    return noofdigit(n/10);
}

int main(){
    int n = 32444;
    noofdigit(n);
}