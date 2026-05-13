#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> visited(26, false);
        bool distracted = true;
        
        for(int i = 0; i < n; i++) {
            if(i == 0 && s[i] != s[i-1]) {
                int idx = s[i] - 'A';
                
                if(visited[idx]) {
                    distracted = false;
                    break;
                }
                visited[idx] = true;
            }
        }
        
        if(distracted) cout << "YES\n";
        else cout << "NO\n";
    }
}