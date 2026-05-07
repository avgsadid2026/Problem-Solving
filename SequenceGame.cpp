#include<bits/stdc++.h>
using namespace std;

vector<long long> solve(vector<long long>& b)
{
    vector<long long> a;
    long long n = b.size();

    a.push_back(b[0]);

    for(long long i = 1; i < n; i++)
    {
        if(b[i] >= b[i-1])
        {
            a.push_back(b[i]);
        }
        else
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    return a;
}

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);

        for(long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<long long> ans = solve(v);

        cout << ans.size() << endl;

        for(auto it : ans)
        {
            cout << it <<endl;
        }

        cout << endl;
    }

    return 0;
}