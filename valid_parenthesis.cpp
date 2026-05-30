#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {

            if (st.empty()) {
                return false;
            }

            if ((st.top() == '(' && ch == ')') ||
                (st.top() == '{' && ch == '}') ||
                (st.top() == '[' && ch == ']')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s))
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}