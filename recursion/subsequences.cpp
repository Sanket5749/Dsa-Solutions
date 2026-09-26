#include <iostream>
#include <string>
using namespace std;

void subsequence(string str, string output, int idx){
    if(idx >= str.length()){
        cout << output << endl;
        return;
    }
    char ch = str[idx];
    output.push_back(ch);
    subsequence(str, output, idx+1);
    output.pop_back();
    subsequence(str, output, idx+1);
}

int main(){
    string str = "abc";
    string output = "";
    int idx = 0;
    subsequence(str, output, idx);
}