#include <bits/stdc++.h>
using namespace std;

string removePairs(string& text) {
    stack<char> st;

    for (char ch : text) {
        if (!st.empty() && st.top() == ch)
           st.pop();
        else
            st.push(ch);
    }

    string Answer  = "";
    while (!st.empty()) {
        Answer += st.top();
        st.pop();
    }
    reverse(Answer.begin(), Answer.end());
    return Answer;
}

int main() {
    string text;
    cin >> text;

    cout << removePairs(text) << endl;

    return 0;
}