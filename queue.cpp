#include <bits/stdc++.h>
using namespace std;

int maxNotDisappointed(vector<int>& times) {

    sort(times.begin(), times.end());

    long long  waittime = 0;
    int happy_Count = 0;

    for (int i = 0; i < times.size(); i++) {
        if ( waittime <= times[i]){
            happy_Count++;

        waittime += times[i];
        }
    }

    return happy_Count;
}

int main() {
    int n;
    cin >> n;

    vector<int> times(n);
    for (int i = 0; i < n; i++)
        cin >> times[i];

    cout << maxNotDisappointed(times) << endl;

    return 0;
}