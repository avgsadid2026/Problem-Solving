#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long> v(n);
        int sum =0;
        for(long long i=0; i<n-1;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<-sum<<endl;
        
    }
 return 0;
}