#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> res;
        int count = 0;

        for(int i = 0; i < n; i++){
            int k = i;
            while(a[i] > k){
                res.push_back(k+1);
                k++;
            }
            count++;
            res.push_back(a[i]);
        }

        for(auto x : res) cout << x << " ";
        cout << endl;

        cout << "c " << count << endl;
    }

    return 0;
}