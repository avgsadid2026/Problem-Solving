#include <bits/stdc++.h>
using namespace std;// abr korte hbe 


int solve(int i, int j) {
    int answer = min(min(i, j), min(9 - i, 9 - j))+1;
    return answer;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<vector<char>> v(10, vector<char>(10));
        for (int i = 0; i < 10; i++) {
          for (int j = 0; j < 10; j++) {
            cin >> v[i][j];
            }
        }

        int total = 0;

        for (int i = 0; i < 10; i++) {
          for (int j = 0; j < 10; j++) {
             if (v[i][j] == 'X') {
                  total += solve(i, j);
                }
            }
        }

        cout << total <<endl;
    }

    return 0;
}