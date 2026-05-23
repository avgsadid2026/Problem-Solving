#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin >> n ; 
        vector<long long> a(n); 
        for (int i = 0; i < n; i++){ 
            cin >> a[i];
        }
    
    int mn= *min_element(a.begin(), a.end());
    int mx=*max_element(a.begin(),a.end());
    int diff=abs(mx-mn);
    int ans;
    if(diff%2==0)
    {
        ans=diff/2;
    }
    else {
        ans=diff/2 +1;
    }
    cout<<ans<<endl;

    }
 return 0;
}