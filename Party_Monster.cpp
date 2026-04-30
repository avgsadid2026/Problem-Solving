#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while(testCases--) {
        int length;
        cin >> length;

        string brackets;
        cin >> brackets;

        int openCount = 0, closeCount = 0;

        for(char sadid : brackets) {
            if( sadid == '(') openCount++;
            else closeCount++;
        }
    
        if(openCount == closeCount)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}