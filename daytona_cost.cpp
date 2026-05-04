#include<bits/stdc++.h>
using namespace std;

string solve(vector<int>&v, int k){
   for (int i=0 ; i<v.size();i++)
        {
            if (v[i]==k)
            {
               return "YES";
            }
        }
        return "NO";
    }

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        int k;
        cin>>k;

      vector<int> v(n);
        for(int i=0; i<n;i++)
        {
            cin>>v[i];
        }  
        
        cout<<solve(v, k)<<endl;
    }
 return 0;
}