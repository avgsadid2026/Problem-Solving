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

        int mx = 0, cnt = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 0)
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else
            {
                cnt = 0;
            }
        }

        cout << mx << endl;
    }

    return 0;
}