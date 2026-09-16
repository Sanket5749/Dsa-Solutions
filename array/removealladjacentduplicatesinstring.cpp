#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    string str = "abbaca";
    stack<char> st;
    for (auto ch : str) {
        if (!st.empty() && st.top() == ch) {
            st.pop();
        } else {
            st.push(ch);
        }
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}