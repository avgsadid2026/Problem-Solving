#include<bits/stdc++.h>
using namespace std;
int zeroInmiddle (int  mid , vector<int>&v,int sz)
{
    unordered_set<int > st;
    int d=0;
    int mex=0;
    while (mid-d>=0&& mid+d<sz && v[mid -d]== v[mid+d])
    {
        st.insert(v[mid-d]);
        while (st.count(mex))mex++;
        d++;

    }
    return mex;
}

int bothinzero(int l , int r, vector<int>&v, int sz)
{
    unordered_set<int > st;
    int d=0;
    int mex=0;
    while (l+d<=r-d&& v[l+d]==v[r-d])
    {
        st.insert(v[l+d]);
        while (st.count(mex))
         mex++;
        d++;

    }
    if(l+d<=r-d)return -1;
    d=1;
    while (l-d>=0 && r+d <sz && v[l-d]==v[r+d])
    {
        st.insert(v[l-d]);
        while (st.count(mex))
         mex++;
        d++;
    }
    return mex;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sz = 2*n;
        vector<int > v(sz);
        for (int i=0 ; i<sz; i++) cin>>v[i];
        int l=-1;
        int r=-1;
        for (int i=0; i<sz; i++)
        {
            if (v[i]==0)
            {
                if(l==-1)l=i;
                else r=i;
            }
        }
       int ans =1;
       ans=max(ans , zeroInmiddle(l,v,sz));
       ans=max(ans , zeroInmiddle(r,v,sz));
       ans=max(ans , bothinzero(l,r,v,sz));
       cout<<ans<<endl;

    }



 return 0;
} 