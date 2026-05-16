#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int one=0; int two=0; int zero =0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 0) zero++;
            else if(x == 1) one++;
            else two++;
        }
        int ans = zero;
        while (one>0 && two>0)
        {
            one --;
            two--;
            ans ++;
        }
        ans+=one/3;
        ans+=two/3;
        cout<<ans<<endl;
        

    }
 return 0;
}